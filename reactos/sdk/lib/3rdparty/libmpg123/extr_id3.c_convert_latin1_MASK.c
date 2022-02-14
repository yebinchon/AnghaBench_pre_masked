
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t fill; int * p; } ;
typedef TYPE_1__ mpg123_string ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_3(mpg123_string *VAR_0, const unsigned char* VAR_1, size_t VAR_2, const int VAR_3)
{
 size_t VAR_4 = VAR_2;
 size_t VAR_5;
 unsigned char *VAR_6;

 for(VAR_5=0; VAR_5<VAR_2; ++VAR_5)
 if(VAR_1[VAR_5] >= 0x80) ++VAR_4;

 FUNC_0("UTF-8 length: %lu", (unsigned long)VAR_4);

 if(!FUNC_2(VAR_0, VAR_4+1)){ FUNC_1(VAR_0); return ; }

 VAR_6 = (unsigned char*) VAR_0->p;
 for(VAR_5=0; VAR_5<VAR_2; ++VAR_5)
 if(VAR_1[VAR_5] < 0x80){ *VAR_6 = VAR_1[VAR_5]; ++VAR_6; }
 else
 {
  *VAR_6 = 0xc0 | (VAR_1[VAR_5]>>6);
  *(VAR_6+1) = 0x80 | (VAR_1[VAR_5] & 0x3f);
  VAR_6+=2;
 }

 VAR_0->p[VAR_4] = 0;
 VAR_0->fill = VAR_4+1;
}

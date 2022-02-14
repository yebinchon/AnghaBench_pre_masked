
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FONScontext ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,unsigned char*,int,int) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(FONScontext* VAR_3, const char* VAR_4, const char* VAR_5)
{
 FILE* VAR_6 = 0;
 int VAR_7 = 0;
 unsigned char* VAR_8 = ((void*)0);


 VAR_6 = FUNC_2(VAR_5, "rb");
 if (VAR_6 == ((void*)0)) goto error;
 FUNC_5(VAR_6,0,VAR_1);
 VAR_7 = (int)FUNC_6(VAR_6);
 FUNC_5(VAR_6,0,VAR_2);
 VAR_8 = (unsigned char*)FUNC_7(VAR_7);
 if (VAR_8 == ((void*)0)) goto error;
 FUNC_3(VAR_8, 1, VAR_7, VAR_6);
 FUNC_0(VAR_6);
 VAR_6 = 0;

 return FUNC_1(VAR_3, VAR_4, VAR_8, VAR_7, 1);

error:
 if (VAR_8) FUNC_4(VAR_8);
 if (VAR_6) FUNC_0(VAR_6);
 return VAR_0;
}

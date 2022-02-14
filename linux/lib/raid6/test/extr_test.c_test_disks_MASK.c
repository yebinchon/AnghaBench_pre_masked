
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*,char*,int,int,int,int,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int,int ,int,int,void**) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_2(VAR_5, 0xf0, VAR_1);
 FUNC_2(VAR_6, 0xba, VAR_1);

 VAR_3[VAR_7] = VAR_5;
 VAR_3[VAR_8] = VAR_6;

 FUNC_4(VAR_0, VAR_1, VAR_7, VAR_8, (void **)&VAR_3);

 VAR_9 = FUNC_1(VAR_2[VAR_7], VAR_5, VAR_1);
 VAR_10 = FUNC_1(VAR_2[VAR_8], VAR_6, VAR_1);

 if (VAR_7 < VAR_0-2 && VAR_8 == VAR_0-1) {


  VAR_9 = VAR_10 = 0;
 } else {
  FUNC_3("algo=%-8s  faila=%3d(%c)  failb=%3d(%c)  %s\n",
         VAR_4.name,
         VAR_7, FUNC_0(VAR_7),
         VAR_8, FUNC_0(VAR_8),
         (!VAR_9 && !VAR_10) ? "OK" :
         !VAR_9 ? "ERRB" :
         !VAR_10 ? "ERRA" : "ERRAB");
 }

 VAR_3[VAR_7] = VAR_2[VAR_7];
 VAR_3[VAR_8] = VAR_2[VAR_8];

 return VAR_9 || VAR_10;
}

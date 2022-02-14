
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int zip_err; char* str; int sys_err; } ;


 size_t VAR_0 ;


 char const** VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct zip_error*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,...) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (int ) ;

const char *
FUNC_6(struct zip_error *VAR_4)
{
    const char *VAR_5, *VAR_6;
    char VAR_7[128], *VAR_8;

    FUNC_0(VAR_4);

    if (VAR_4->zip_err < 0 || VAR_4->zip_err >= VAR_3) {
 FUNC_2(VAR_7, "Unknown error %d", VAR_4->zip_err);
 VAR_5 = ((void*)0);
 VAR_6 = VAR_7;
    }
    else {
 VAR_5 = VAR_1[VAR_4->zip_err];

 switch (VAR_2[VAR_4->zip_err]) {
 case 129:
     VAR_6 = FUNC_3(VAR_4->sys_err);
     break;

 case 128:
     VAR_6 = FUNC_5(VAR_4->sys_err);
     break;

 default:
     VAR_6 = ((void*)0);
 }
    }

    if (VAR_6 == ((void*)0))
 return VAR_5;
    else {
 if ((VAR_8=(char *)FUNC_1(FUNC_4(VAR_6)
         + (VAR_5 ? FUNC_4(VAR_5)+2 : 0) + 1)) == ((void*)0))
     return VAR_1[VAR_0];

 FUNC_2(VAR_8, "%s%s%s",
  (VAR_5 ? VAR_5 : ""),
  (VAR_5 ? ": " : ""),
  VAR_6);
 VAR_4->str = VAR_8;

 return VAR_8;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * member_7; int * member_6; int member_5; int member_4; int * member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SHFILEOPSTRUCTW ;
typedef int HWND ;
typedef int FILEOP_FLAGS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,int) ;
 int FUNC_3 (char const*,size_t) ;
 int FUNC_4 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static __inline int FUNC_5(HWND VAR_3, const char* VAR_4, FILEOP_FLAGS VAR_5)
{
 int VAR_6;


 size_t VAR_7 = FUNC_1(VAR_4) + 2;

 FUNC_3(VAR_4, VAR_7);
 SHFILEOPSTRUCTW VAR_8 = { &VAR_3, &VAR_1, VAR_2, ((void*)0), &VAR_5, VAR_0, ((void*)0), ((void*)0) };
 FUNC_2(VAR_4, VAR_2, (int)VAR_7);

 VAR_6 = FUNC_0(&VAR_8);
 FUNC_4(VAR_4);
 return VAR_6;
}

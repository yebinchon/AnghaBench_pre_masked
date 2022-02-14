
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int PWCHAR ;
typedef int PHANDLE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int ACCESS_MASK ;


 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_3(PHANDLE VAR_2,
                      ACCESS_MASK VAR_3,
                      PWCHAR VAR_4)
{
    UNICODE_STRING VAR_5;
    OBJECT_ATTRIBUTES VAR_6;

    FUNC_2(&VAR_5, VAR_4);
    FUNC_0(&VAR_6,
                               &VAR_5,
                               VAR_0,
                               ((void*)0),
                               ((void*)0));

    return FUNC_1(VAR_2, VAR_3, &VAR_6, 0, ((void*)0), VAR_1, 0);
}

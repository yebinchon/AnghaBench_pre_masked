
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
struct ciffile {int name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inf_section*,char*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_1(struct ciffile *VAR_3, struct inf_section *VAR_4)
{
    if (!FUNC_0(VAR_4, "DisplayName", &VAR_3->name, VAR_0))
        return VAR_1;

    return VAR_2;
}

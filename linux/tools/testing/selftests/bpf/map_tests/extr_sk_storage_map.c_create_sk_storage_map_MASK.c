
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int btf_fd; } ;


 int FUNC_0 (int,char*,char*,int,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_3();
 FUNC_0(VAR_2 == -1, "bpf_load_btf", "btf_fd:%d errno:%d\n",
       VAR_2, VAR_0);
 VAR_1.btf_fd = VAR_2;

 VAR_3 = FUNC_1(&VAR_1);
 VAR_1.btf_fd = -1;
 FUNC_2(VAR_2);
 FUNC_0(VAR_3 == -1,
       "bpf_create_map_xattr()", "errno:%d\n", VAR_0);

 return VAR_3;
}

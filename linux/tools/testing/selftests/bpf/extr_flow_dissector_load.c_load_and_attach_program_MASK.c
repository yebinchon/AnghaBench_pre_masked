
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_object**,char*,int ,int ,int *,int*,int *) ;
 int FUNC_1 (struct bpf_object*,char*) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_5, VAR_6;
 struct bpf_object *VAR_7;

 VAR_6 = FUNC_0(&VAR_7, VAR_2, VAR_4,
       VAR_1, ((void*)0), &VAR_5, ((void*)0));
 if (VAR_6)
  FUNC_3(1, 0, "bpf_flow_load %s", VAR_2);

 VAR_6 = FUNC_2(VAR_5, 0 , VAR_0, 0);
 if (VAR_6)
  FUNC_3(1, 0, "bpf_prog_attach %s", VAR_2);

 VAR_6 = FUNC_1(VAR_7, VAR_3);
 if (VAR_6)
  FUNC_3(1, 0, "bpf_object__pin %s", VAR_3);
}

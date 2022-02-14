
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bpf_map_info {int id; } ;
typedef int info ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (int,struct bpf_map_info*,int*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, uint32_t VAR_2)
{
 struct bpf_map_info VAR_3 = {};
 uint32_t VAR_4 = sizeof(VAR_3);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_0, &VAR_3, &VAR_4);
 FUNC_0(!VAR_5);

 VAR_5 = FUNC_1(VAR_1, &VAR_2, &VAR_6);
 FUNC_0(!VAR_5);
 FUNC_0(VAR_6 == VAR_3.id);
}

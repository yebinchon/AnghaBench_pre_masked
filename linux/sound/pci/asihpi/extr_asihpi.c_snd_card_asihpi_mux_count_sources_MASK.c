
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct hpi_control {int src_node_index; int src_node_type; } ;


 int FUNC_0 (int ,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0)
{
 u32 VAR_1 = VAR_0->private_value;
 struct hpi_control VAR_2;
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, VAR_3,
        &VAR_2.
        src_node_type,
        &VAR_2.
        src_node_index);
  if (VAR_4)
   break;
 }
 return VAR_3;
}

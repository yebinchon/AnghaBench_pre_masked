
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct atiixp* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct atiixp {scalar_t__ remap_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0,
     struct snd_info_buffer *VAR_1)
{
 struct atiixp *VAR_2 = VAR_0->private_data;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3 += 4)
  FUNC_1(VAR_1, "%02x: %08x\n", VAR_3, FUNC_0(VAR_2->remap_addr + VAR_3));
}

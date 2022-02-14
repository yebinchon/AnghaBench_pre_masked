
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nd_cmd_set_config_hdr {unsigned int in_offset; int in_length; int in_buf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 unsigned int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct nd_cmd_set_config_hdr *VAR_2,
  unsigned int VAR_3, void *VAR_4)
{
 unsigned int VAR_5, VAR_6 = VAR_2->in_offset;
 u32 *VAR_7;
 int VAR_8;

 if (VAR_3 < sizeof(*VAR_2))
  return -VAR_0;
 if (VAR_6 >= VAR_1)
  return -VAR_0;
 if (VAR_2->in_length + sizeof(*VAR_2) + 4 > VAR_3)
  return -VAR_0;

 VAR_7 = (void *)VAR_2 + VAR_2->in_length + sizeof(*VAR_2);
 *VAR_7 = 0;
 VAR_5 = FUNC_1(VAR_2->in_length, VAR_1 - VAR_6);
 FUNC_0(VAR_4 + VAR_6, VAR_2->in_buf, VAR_5);
 VAR_8 = VAR_3 - sizeof(*VAR_2) - (VAR_5 + 4);

 return VAR_8;
}

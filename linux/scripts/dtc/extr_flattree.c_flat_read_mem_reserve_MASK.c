
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct reserve_info {int dummy; } ;
struct inbuf {int dummy; } ;
struct fdt_reserve_entry {int size; int address; } ;
typedef int re ;


 struct reserve_info* FUNC_0 (struct reserve_info*,struct reserve_info*) ;
 struct reserve_info* FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inbuf*,struct fdt_reserve_entry*,int) ;

__attribute__((used)) static struct reserve_info *FUNC_4(struct inbuf *VAR_0)
{
 struct reserve_info *VAR_1 = ((void*)0);
 struct reserve_info *VAR_2;
 struct fdt_reserve_entry VAR_3;







 while (1) {
  uint64_t VAR_4, VAR_5;

  FUNC_3(VAR_0, &VAR_3, sizeof(VAR_3));
  VAR_4 = FUNC_2(VAR_3.address);
  VAR_5 = FUNC_2(VAR_3.size);
  if (VAR_5 == 0)
   break;

  VAR_2 = FUNC_1(VAR_4, VAR_5);
  VAR_1 = FUNC_0(VAR_1, VAR_2);
 }

 return VAR_1;
}

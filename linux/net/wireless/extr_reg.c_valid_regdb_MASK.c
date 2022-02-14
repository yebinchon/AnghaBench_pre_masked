
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct fwdb_header {scalar_t__ magic; scalar_t__ version; struct fwdb_country* country; } ;
struct fwdb_country {int coll_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int const*,unsigned int) ;
 int FUNC_2 (int const*,unsigned int,struct fwdb_country const*) ;

__attribute__((used)) static bool FUNC_3(const u8 *VAR_2, unsigned int VAR_3)
{
 const struct fwdb_header *VAR_4 = (void *)VAR_2;
 const struct fwdb_country *VAR_5;

 if (VAR_3 < sizeof(*VAR_4))
  return 0;

 if (VAR_4->magic != FUNC_0(VAR_0))
  return 0;

 if (VAR_4->version != FUNC_0(VAR_1))
  return 0;

 if (!FUNC_1(VAR_2, VAR_3))
  return 0;

 VAR_5 = &VAR_4->country[0];
 while ((u8 *)(VAR_5 + 1) <= VAR_2 + VAR_3) {
  if (!VAR_5->coll_ptr)
   break;
  if (!FUNC_2(VAR_2, VAR_3, VAR_5))
   return 0;
  VAR_5++;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdb_header {struct fwdb_country* country; } ;
struct fwdb_country {int alpha2; scalar_t__ coll_ptr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct fwdb_header*) ;
 int FUNC_2 (struct fwdb_header*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 struct fwdb_header* VAR_1 ;
 int FUNC_4 (struct fwdb_header*,struct fwdb_country const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2)
{
 const struct fwdb_header *VAR_3 = VAR_1;
 const struct fwdb_country *VAR_4;

 FUNC_0();

 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_1);

 VAR_4 = &VAR_3->country[0];
 while (VAR_4->coll_ptr) {
  if (FUNC_3(VAR_2, VAR_4->alpha2))
   return FUNC_4(VAR_1, VAR_4);
  VAR_4++;
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
typedef int __u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct shash_desc*,unsigned char const*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;

__u16 FUNC_7(__u16 VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 struct {
  struct shash_desc shash;
  char ctx[2];
 } VAR_5;
 int VAR_6;

 if (FUNC_6(&VAR_0))
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_4();
 VAR_5.shash.tfm = FUNC_3(VAR_1);
 *(__u16 *)VAR_5.ctx = VAR_2;

 VAR_6 = FUNC_2(&VAR_5.shash, VAR_3, VAR_4);
 FUNC_5();

 FUNC_0(VAR_6);

 return *(__u16 *)VAR_5.ctx;
}

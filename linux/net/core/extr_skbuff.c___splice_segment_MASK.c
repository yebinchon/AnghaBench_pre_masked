
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_pipe_desc {int dummy; } ;
struct sock {int dummy; } ;
struct pipe_inode_info {int dummy; } ;
struct page {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct splice_pipe_desc*,struct pipe_inode_info*,struct page*,unsigned int*,unsigned int,int,struct sock*) ;

__attribute__((used)) static bool FUNC_2(struct page *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int *VAR_3,
        unsigned int *VAR_4,
        struct splice_pipe_desc *VAR_5, bool VAR_6,
        struct sock *VAR_7,
        struct pipe_inode_info *VAR_8)
{
 if (!*VAR_4)
  return 1;


 if (*VAR_3 >= VAR_2) {
  *VAR_3 -= VAR_2;
  return 0;
 }


 VAR_1 += *VAR_3;
 VAR_2 -= *VAR_3;
 *VAR_3 = 0;

 do {
  unsigned int VAR_9 = FUNC_0(*VAR_4, VAR_2);

  if (FUNC_1(VAR_5, VAR_8, VAR_0, &VAR_9, VAR_1,
      VAR_6, VAR_7))
   return 1;
  VAR_1 += VAR_9;
  VAR_2 -= VAR_9;
  *VAR_4 -= VAR_9;
 } while (*VAR_4 && VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacket_req {unsigned int tp_block_nr; } ;
struct pgv {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pgv*,int,unsigned int) ;
 struct pgv* FUNC_2 (unsigned int,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct pgv *FUNC_4(struct tpacket_req *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2->tp_block_nr;
 struct pgv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, sizeof(struct pgv), VAR_0 | VAR_1);
 if (FUNC_3(!VAR_5))
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5[VAR_6].buffer = FUNC_0(VAR_3);
  if (FUNC_3(!VAR_5[VAR_6].buffer))
   goto out_free_pgvec;
 }

out:
 return VAR_5;

out_free_pgvec:
 FUNC_1(VAR_5, VAR_3, VAR_4);
 VAR_5 = ((void*)0);
 goto out;
}

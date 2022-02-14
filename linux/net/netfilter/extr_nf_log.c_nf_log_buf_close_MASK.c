
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_log_buf {size_t count; scalar_t__* buf; } ;


 struct nf_log_buf VAR_0 ;
 struct nf_log_buf* VAR_1 ;
 int FUNC_0 (struct nf_log_buf*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__*) ;

void FUNC_4(struct nf_log_buf *VAR_2)
{
 VAR_2->buf[VAR_2->count] = 0;
 FUNC_3("%s\n", VAR_2->buf);

 if (FUNC_1(VAR_2 != &VAR_0))
  FUNC_0(VAR_2);
 else {
  VAR_1 = VAR_2;
  FUNC_2();
 }
}

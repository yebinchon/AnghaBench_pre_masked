
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_conn {int dummy; } ;


 int FUNC_0 () ;
 struct nf_conn* FUNC_1 (int (*) (struct nf_conn*,void*),void*,unsigned int*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (struct nf_conn*,int ,int) ;
 int FUNC_4 (struct nf_conn*) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(int (*VAR_1)(struct nf_conn *VAR_2, void *VAR_3),
      void *VAR_4, u32 VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8;
 struct nf_conn *VAR_9;

 FUNC_2();

 for (;;) {
  VAR_8 = FUNC_5(&VAR_0);

  while ((VAR_9 = FUNC_1(VAR_1, VAR_4, &VAR_7)) != ((void*)0)) {


   FUNC_3(VAR_9, VAR_5, VAR_6);
   FUNC_4(VAR_9);
   FUNC_0();
  }

  if (!FUNC_6(&VAR_0, VAR_8))
   break;
  VAR_7 = 0;
 }
}

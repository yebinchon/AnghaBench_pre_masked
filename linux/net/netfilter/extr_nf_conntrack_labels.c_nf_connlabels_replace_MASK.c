
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_conn_labels {scalar_t__ bits; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 struct nf_conn_labels* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int *,int const,int const) ;

int FUNC_3(struct nf_conn *VAR_2,
     const u32 *VAR_3,
     const u32 *VAR_4, unsigned int VAR_5)
{
 struct nf_conn_labels *VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;
 u32 *VAR_10;

 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = sizeof(VAR_6->bits);
 if (VAR_7 < (VAR_5 * sizeof(u32)))
  VAR_5 = VAR_7 / sizeof(u32);

 VAR_10 = (u32 *) VAR_6->bits;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_9 |= FUNC_2(&VAR_10[VAR_8], VAR_4 ? ~VAR_4[VAR_8] : 0, VAR_3[VAR_8]);

 VAR_7 /= sizeof(u32);
 for (VAR_8 = VAR_5; VAR_8 < VAR_7; VAR_8++)
  FUNC_2(&VAR_10[VAR_8], 0, 0);

 if (VAR_9)
  FUNC_0(VAR_1, VAR_2);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;
struct iter_data {int (* iter ) (struct nf_conn*,int ) ;int data; int net; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*,int ) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_0, void *VAR_1)
{
 struct iter_data *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_2->net, FUNC_1(VAR_0)))
  return 0;

 return VAR_2->iter(VAR_0, VAR_2->data);
}

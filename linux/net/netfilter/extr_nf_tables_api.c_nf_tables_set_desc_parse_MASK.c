
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_set_desc {int size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nft_set_desc *VAR_3,
        const struct nlattr *VAR_4)
{
 struct nlattr *VAR_5[VAR_0 + 1];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_4,
       VAR_2, ((void*)0));
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5[VAR_1] != ((void*)0))
  VAR_3->size = FUNC_2(FUNC_0(VAR_5[VAR_1]));

 return 0;
}

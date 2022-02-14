
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn_synproxy {void* tsoff; void* its; void* isn; } ;
struct nf_conn {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct nf_conn_synproxy* FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 void* FUNC_3 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct nf_conn *VAR_7,
         const struct nlattr * const VAR_8[])
{
 struct nf_conn_synproxy *VAR_9 = FUNC_0(VAR_7);
 struct nlattr *VAR_10[VAR_3 + 1];
 int VAR_11;

 if (!VAR_9)
  return 0;

 VAR_11 = FUNC_2(VAR_10, VAR_3,
       VAR_8[VAR_0], VAR_6,
       ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_10[VAR_1] ||
     !VAR_10[VAR_2] ||
     !VAR_10[VAR_4])
  return -VAR_5;

 VAR_9->isn = FUNC_3(FUNC_1(VAR_10[VAR_1]));
 VAR_9->its = FUNC_3(FUNC_1(VAR_10[VAR_2]));
 VAR_9->tsoff = FUNC_3(FUNC_1(VAR_10[VAR_4]));

 return 0;
}

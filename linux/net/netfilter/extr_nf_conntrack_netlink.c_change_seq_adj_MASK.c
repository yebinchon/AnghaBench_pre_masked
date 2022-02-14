
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_ct_seqadj {void* offset_after; void* offset_before; void* correction_pos; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 void* FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct nf_ct_seqadj *VAR_6,
     const struct nlattr * const VAR_7)
{
 int VAR_8;
 struct nlattr *VAR_9[VAR_1+1];

 VAR_8 = FUNC_1(VAR_9, VAR_1, VAR_7,
       VAR_5, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_9[VAR_0])
  return -VAR_4;

 VAR_6->correction_pos =
  FUNC_2(FUNC_0(VAR_9[VAR_0]));

 if (!VAR_9[VAR_3])
  return -VAR_4;

 VAR_6->offset_before =
  FUNC_2(FUNC_0(VAR_9[VAR_3]));

 if (!VAR_9[VAR_2])
  return -VAR_4;

 VAR_6->offset_after =
  FUNC_2(FUNC_0(VAR_9[VAR_2]));

 return 0;
}

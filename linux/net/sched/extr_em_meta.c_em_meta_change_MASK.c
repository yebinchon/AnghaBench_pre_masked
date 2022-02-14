
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kind; } ;
struct tcf_meta_hdr {TYPE_3__ right; TYPE_3__ left; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int hdr; } ;
struct meta_match {TYPE_1__ rvalue; TYPE_1__ lvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 struct meta_match* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct nlattr*) ;
 int FUNC_5 (struct meta_match*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_10 ;
 struct tcf_meta_hdr* FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,void*,int,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_11, void *VAR_12, int VAR_13,
     struct tcf_ematch *VAR_14)
{
 int VAR_15;
 struct nlattr *VAR_16[VAR_6 + 1];
 struct tcf_meta_hdr *VAR_17;
 struct meta_match *VAR_18 = ((void*)0);

 VAR_15 = FUNC_8(VAR_16, VAR_6, VAR_12, VAR_13,
       VAR_10, ((void*)0));
 if (VAR_15 < 0)
  goto errout;

 VAR_15 = -VAR_0;
 if (VAR_16[VAR_4] == ((void*)0))
  goto errout;
 VAR_17 = FUNC_7(VAR_16[VAR_4]);

 if (FUNC_1(VAR_17->left.kind) != FUNC_1(VAR_17->right.kind) ||
     FUNC_1(VAR_17->left.kind) > VAR_9 ||
     FUNC_0(VAR_17->left.kind) > VAR_8 ||
     FUNC_0(VAR_17->right.kind) > VAR_8)
  goto errout;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_3);
 if (VAR_18 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto errout;
 }

 FUNC_3(&VAR_18->lvalue.hdr, &VAR_17->left, sizeof(VAR_17->left));
 FUNC_3(&VAR_18->rvalue.hdr, &VAR_17->right, sizeof(VAR_17->right));

 if (!FUNC_6(&VAR_18->lvalue) ||
     !FUNC_6(&VAR_18->rvalue)) {
  VAR_15 = -VAR_2;
  goto errout;
 }

 if (FUNC_4(&VAR_18->lvalue, VAR_16[VAR_5]) < 0 ||
     FUNC_4(&VAR_18->rvalue, VAR_16[VAR_7]) < 0)
  goto errout;

 VAR_14->datalen = sizeof(*VAR_18);
 VAR_14->data = (unsigned long) VAR_18;

 VAR_15 = 0;
errout:
 if (VAR_15 && VAR_18)
  FUNC_5(VAR_18);
 return VAR_15;
}

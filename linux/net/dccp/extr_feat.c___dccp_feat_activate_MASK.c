
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sock {int dummy; } ;
struct TYPE_5__ {scalar_t__* vec; } ;
struct TYPE_6__ {scalar_t__ nn; TYPE_1__ sp; } ;
typedef TYPE_2__ dccp_feat_val ;
struct TYPE_7__ {int (* activation_hdlr ) (struct sock*,scalar_t__,int) ;scalar_t__ reconciliation; scalar_t__ rxtx; int feat_num; scalar_t__ default_value; } ;


 int FUNC_0 (char*,int const) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*,int ,char*,unsigned long long) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct sock*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_4, const int VAR_5,
    const bool VAR_6, dccp_feat_val const *VAR_7)
{
 bool VAR_8;
 u64 VAR_9;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;
 if (VAR_3[VAR_5].activation_hdlr == ((void*)0))
  return 0;

 if (VAR_7 == ((void*)0)) {
  VAR_9 = VAR_3[VAR_5].default_value;
 } else if (VAR_3[VAR_5].reconciliation == VAR_2) {
  if (VAR_7->sp.vec == ((void*)0)) {





   FUNC_0("Feature #%d undefined: using default", VAR_5);
   VAR_9 = VAR_3[VAR_5].default_value;
  } else {
   VAR_9 = VAR_7->sp.vec[0];
  }
 } else {
  VAR_9 = VAR_7->nn;
 }


 VAR_8 = (VAR_6 == (VAR_3[VAR_5].rxtx == VAR_1));

 FUNC_1("   -> activating %s %s, %sval=%llu\n", VAR_8 ? "RX" : "TX",
     FUNC_2(VAR_3[VAR_5].feat_num),
     VAR_7 ? "" : "default ", (unsigned long long)VAR_9);

 return VAR_3[VAR_5].activation_hdlr(VAR_4, VAR_9, VAR_8);
}

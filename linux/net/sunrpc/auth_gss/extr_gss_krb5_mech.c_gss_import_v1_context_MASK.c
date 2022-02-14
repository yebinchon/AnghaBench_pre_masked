
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int tmp ;
struct TYPE_2__ {int data; } ;
struct krb5_ctx {int initiate; int endtime; TYPE_1__ mech_used; int enc; int seq; int seq_send; int * gk5e; int enctype; } ;
typedef int seq_send ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 void* FUNC_6 (void const*,void const*,struct krb5_ctx*,int *) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (void const*,void const*,int*,int) ;
 void* FUNC_9 (void const*,void const*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(const void *VAR_6, const void *VAR_7, struct krb5_ctx *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 VAR_6 = FUNC_8(VAR_6, VAR_7, &VAR_8->initiate, sizeof(VAR_8->initiate));
 if (FUNC_1(VAR_6))
  goto out_err;


 VAR_8->enctype = VAR_2;

 VAR_8->gk5e = FUNC_5(VAR_8->enctype);
 if (VAR_8->gk5e == ((void*)0)) {
  VAR_6 = FUNC_0(-VAR_1);
  goto out_err;
 }





 if (FUNC_10(VAR_6 + 20 > VAR_7 || VAR_6 + 20 < VAR_6)) {
  VAR_6 = FUNC_0(-VAR_0);
  goto out_err;
 }
 VAR_6 += 20;
 VAR_6 = FUNC_8(VAR_6, VAR_7, &VAR_10, sizeof(VAR_10));
 if (FUNC_1(VAR_6))
  goto out_err;
 if (VAR_10 != VAR_5) {
  VAR_6 = FUNC_0(-VAR_3);
  goto out_err;
 }
 VAR_6 = FUNC_8(VAR_6, VAR_7, &VAR_10, sizeof(VAR_10));
 if (FUNC_1(VAR_6))
  goto out_err;
 if (VAR_10 != VAR_4) {
  VAR_6 = FUNC_0(-VAR_3);
  goto out_err;
 }
 VAR_6 = FUNC_8(VAR_6, VAR_7, &VAR_8->endtime, sizeof(VAR_8->endtime));
 if (FUNC_1(VAR_6))
  goto out_err;
 VAR_6 = FUNC_8(VAR_6, VAR_7, &VAR_9, sizeof(VAR_9));
 if (FUNC_1(VAR_6))
  goto out_err;
 FUNC_3(&VAR_8->seq_send, VAR_9);
 VAR_6 = FUNC_9(VAR_6, VAR_7, &VAR_8->mech_used);
 if (FUNC_1(VAR_6))
  goto out_err;
 VAR_6 = FUNC_6(VAR_6, VAR_7, VAR_8, &VAR_8->enc);
 if (FUNC_1(VAR_6))
  goto out_err_free_mech;
 VAR_6 = FUNC_6(VAR_6, VAR_7, VAR_8, &VAR_8->seq);
 if (FUNC_1(VAR_6))
  goto out_err_free_key1;
 if (VAR_6 != VAR_7) {
  VAR_6 = FUNC_0(-VAR_0);
  goto out_err_free_key2;
 }

 return 0;

out_err_free_key2:
 FUNC_4(VAR_8->seq);
out_err_free_key1:
 FUNC_4(VAR_8->enc);
out_err_free_mech:
 FUNC_7(VAR_8->mech_used.data);
out_err:
 return FUNC_2(VAR_6);
}

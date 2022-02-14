
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nf_conn {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {int dwork; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,scalar_t__,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_12 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int*,int) ;
 int FUNC_23 (int ,int *,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_15 ;
 unsigned int FUNC_26 () ;
 unsigned long FUNC_27 () ;

int FUNC_28(void)
{
 unsigned long VAR_16 = FUNC_27();
 int VAR_17 = 8;
 int VAR_18 = -VAR_1;
 int VAR_19;


 FUNC_0(FUNC_26() > 255u);

 FUNC_24(&VAR_10);

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++)
  FUNC_25(&VAR_13[VAR_19]);

 if (!VAR_12) {





  VAR_12
   = (((VAR_16 << VAR_4) / 16384)
      / sizeof(struct hlist_head));
  if (VAR_16 > (4 * (1024 * 1024 * 1024 / VAR_5)))
   VAR_12 = 65536;
  else if (VAR_16 > (1024 * 1024 * 1024 / VAR_5))
   VAR_12 = 16384;
  if (VAR_12 < 32)
   VAR_12 = 32;





  VAR_17 = 4;
 }

 VAR_11 = FUNC_22(&VAR_12, 1);
 if (!VAR_11)
  return -VAR_1;

 VAR_14 = VAR_17 * VAR_12;

 VAR_9 = FUNC_2("nf_conntrack",
      sizeof(struct nf_conn),
      VAR_3 + 1,
      VAR_7 | VAR_6, ((void*)0));
 if (!VAR_9)
  goto err_cachep;

 VAR_18 = FUNC_10();
 if (VAR_18 < 0)
  goto err_expect;

 VAR_18 = FUNC_6();
 if (VAR_18 < 0)
  goto err_acct;

 VAR_18 = FUNC_21();
 if (VAR_18 < 0)
  goto err_tstamp;

 VAR_18 = FUNC_8();
 if (VAR_18 < 0)
  goto err_ecache;

 VAR_18 = FUNC_19();
 if (VAR_18 < 0)
  goto err_timeout;

 VAR_18 = FUNC_12();
 if (VAR_18 < 0)
  goto err_helper;

 VAR_18 = FUNC_14();
 if (VAR_18 < 0)
  goto err_labels;

 VAR_18 = FUNC_17();
 if (VAR_18 < 0)
  goto err_seqadj;

 VAR_18 = FUNC_15();
 if (VAR_18 < 0)
  goto err_proto;

 FUNC_1(&VAR_8);
 FUNC_23(VAR_15, &VAR_8.dwork, VAR_2);

 return 0;

err_proto:
 FUNC_16();
err_seqadj:
 FUNC_13();
err_labels:
 FUNC_11();
err_helper:
 FUNC_18();
err_timeout:
 FUNC_7();
err_ecache:
 FUNC_20();
err_tstamp:
 FUNC_5();
err_acct:
 FUNC_9();
err_expect:
 FUNC_3(VAR_9);
err_cachep:
 FUNC_4(VAR_11);
 return VAR_18;
}

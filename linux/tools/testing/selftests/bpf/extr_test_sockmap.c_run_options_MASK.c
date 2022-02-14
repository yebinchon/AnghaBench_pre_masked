
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockmap_options {int drop_expected; int base; int sendpage; int rate; int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int,int*,int*,int ) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (int ,struct sockmap_options*) ;
 int FUNC_6 (int ,char*,...) ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (struct sockmap_options*) ;
 int FUNC_8 (int ) ;
 int VAR_20 ;
 char* FUNC_9 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int FUNC_10(struct sockmap_options *VAR_36, int VAR_37, int VAR_38)
{
 int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43 = -1, VAR_44 = 0;


 if (VAR_38 == VAR_0 || VAR_38 == VAR_1)
  goto run;


 VAR_42 = FUNC_2(VAR_17[0], VAR_14[0],
    VAR_6, 0);
 if (VAR_42) {
  FUNC_6(VAR_20,
   "ERROR: bpf_prog_attach (sockmap %i->%i): %d (%s)\n",
   VAR_17[0], VAR_14[0], VAR_42, FUNC_9(VAR_13));
  return VAR_42;
 }

 VAR_42 = FUNC_2(VAR_17[1], VAR_14[0],
    VAR_7, 0);
 if (VAR_42) {
  FUNC_6(VAR_20, "ERROR: bpf_prog_attach (sockmap): %d (%s)\n",
   VAR_42, FUNC_9(VAR_13));
  return VAR_42;
 }


 VAR_42 = FUNC_2(VAR_17[2], VAR_37, VAR_3, 0);
 if (VAR_42) {
  FUNC_6(VAR_20, "ERROR: bpf_prog_attach (groups): %d (%s)\n",
   VAR_42, FUNC_9(VAR_13));
  return VAR_42;
 }

run:
 VAR_42 = FUNC_8(VAR_36->verbose);
 if (VAR_42) {
  FUNC_6(VAR_20, "ERROR: test socket failed: %d\n", VAR_42);
  goto out;
 }


 if (VAR_28)
  VAR_43 = VAR_17[3];
 else if (VAR_27)
  VAR_43 = VAR_17[4];
 else if (VAR_30)
  VAR_43 = VAR_17[5];
 else if (VAR_31)
  VAR_43 = VAR_17[6];
 else if (VAR_23)
  VAR_43 = VAR_17[9];

 else if (VAR_21)
  VAR_43 = VAR_17[7];
 else if (VAR_22)
  VAR_43 = VAR_17[8];
 else
  VAR_43 = 0;

 if (VAR_43) {
  int VAR_45, VAR_46 = 0;

  VAR_42 = FUNC_2(VAR_43,
          VAR_14[1], VAR_5, 0);
  if (VAR_42) {
   FUNC_6(VAR_20,
    "ERROR: bpf_prog_attach (txmsg): %d (%s)\n",
    VAR_42, FUNC_9(VAR_13));
   goto out;
  }

  VAR_42 = FUNC_1(VAR_14[1], &VAR_46, &VAR_11, VAR_2);
  if (VAR_42) {
   FUNC_6(VAR_20,
    "ERROR: bpf_map_update_elem (txmsg):  %d (%s\n",
    VAR_42, FUNC_9(VAR_13));
   goto out;
  }

  if (VAR_30 || VAR_31)
   VAR_45 = VAR_12;
  else
   VAR_45 = VAR_11;

  VAR_42 = FUNC_1(VAR_14[2], &VAR_46, &VAR_45, VAR_2);
  if (VAR_42) {
   FUNC_6(VAR_20,
    "ERROR: bpf_map_update_elem (txmsg):  %d (%s\n",
    VAR_42, FUNC_9(VAR_13));
   goto out;
  }

  if (VAR_21) {
   VAR_42 = FUNC_1(VAR_14[3],
        &VAR_46, &VAR_21, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (apply_bytes):  %d (%s\n",
     VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_22) {
   VAR_42 = FUNC_1(VAR_14[4],
        &VAR_46, &VAR_22, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (cork_bytes):  %d (%s\n",
     VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_33) {
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_33, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (txmsg_start):  %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_24) {
   VAR_46 = 1;
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_24, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (txmsg_end):  %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_35) {
   VAR_46 = 2;
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_35, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (txmsg_start_push):  %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_25) {
   VAR_46 = 3;
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_25, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem %i@%i (txmsg_end_push):  %d (%s)\n",
     VAR_25, VAR_46, VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  }

  if (VAR_34) {
   VAR_46 = 4;
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_34, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem %i@%i (txmsg_start_pop):  %d (%s)\n",
     VAR_34, VAR_46, VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  } else {
   VAR_46 = 4;
   FUNC_1(VAR_14[5],
        &VAR_46, &VAR_34, VAR_2);
  }

  if (VAR_29) {
   VAR_46 = 5;
   VAR_42 = FUNC_1(VAR_14[5],
        &VAR_46, &VAR_29, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem %i@%i (txmsg_pop):  %d (%s)\n",
     VAR_29, VAR_46, VAR_42, FUNC_9(VAR_13));
    goto out;
   }
  } else {
   VAR_46 = 5;
   FUNC_1(VAR_14[5],
         &VAR_46, &VAR_29, VAR_2);

  }

  if (VAR_26) {
   int VAR_47 = VAR_4;

   VAR_46 = 0;
   VAR_42 = FUNC_1(VAR_14[6], &VAR_46, &VAR_47, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (txmsg_ingress): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }
   VAR_46 = 1;
   VAR_42 = FUNC_1(VAR_14[1], &VAR_46, &VAR_15, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (p1 txmsg): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }
   VAR_42 = FUNC_1(VAR_14[2], &VAR_46, &VAR_15, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (p1 redir): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }

   VAR_46 = 2;
   VAR_42 = FUNC_1(VAR_14[2], &VAR_46, &VAR_16, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (p2 txmsg): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }
  }

  if (VAR_32) {
   int VAR_48 = (VAR_38 == VAR_9 || VAR_38 == VAR_10) ?
     VAR_16 : VAR_15;
   int VAR_49 = VAR_4;

   VAR_46 = 0;
   VAR_42 = FUNC_1(VAR_14[7],
        &VAR_46, &VAR_49, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (txmsg_ingress): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }

   VAR_46 = 3;
   VAR_42 = FUNC_1(VAR_14[0],
        &VAR_46, &VAR_48, VAR_2);
   if (VAR_42) {
    FUNC_6(VAR_20,
     "ERROR: bpf_map_update_elem (c1 sockmap): %d (%s)\n",
     VAR_42, FUNC_9(VAR_13));
   }
  }
 }

 if (VAR_23)
  VAR_36->drop_expected = 1;

 if (VAR_38 == VAR_8)
  VAR_42 = FUNC_5(VAR_36->rate, VAR_36);
 else if (VAR_38 == VAR_9) {
  VAR_36->base = 0;
  VAR_36->sendpage = 0;
  VAR_42 = FUNC_7(VAR_36);
 } else if (VAR_38 == VAR_10) {
  VAR_36->base = 0;
  VAR_36->sendpage = 1;
  VAR_42 = FUNC_7(VAR_36);
 } else if (VAR_38 == VAR_0) {
  VAR_36->base = 1;
  VAR_36->sendpage = 0;
  VAR_42 = FUNC_7(VAR_36);
 } else if (VAR_38 == VAR_1) {
  VAR_36->base = 1;
  VAR_36->sendpage = 1;
  VAR_42 = FUNC_7(VAR_36);
 } else
  FUNC_6(VAR_20, "unknown test\n");
out:

 FUNC_3(VAR_17[2], VAR_37, VAR_3);
 FUNC_3(VAR_17[0], VAR_14[0], VAR_6);
 FUNC_3(VAR_17[1], VAR_14[0], VAR_7);
 if (VAR_43 >= 0)
  FUNC_3(VAR_43, VAR_14[1], VAR_5);

 for (VAR_39 = 0; VAR_39 < 8; VAR_39++) {
  VAR_40 = VAR_41 = 0;
  FUNC_1(VAR_14[VAR_39], &VAR_40, &VAR_44, VAR_2);
  while (FUNC_0(VAR_14[VAR_39], &VAR_40, &VAR_41) == 0) {
   FUNC_1(VAR_14[VAR_39], &VAR_40, &VAR_44, VAR_2);
   VAR_40 = VAR_41;
  }
 }

 FUNC_4(VAR_18);
 FUNC_4(VAR_19);
 FUNC_4(VAR_15);
 FUNC_4(VAR_16);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);
 return VAR_42;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scale_test_def {char* member_0; int member_2; int fails; int attach_type; int file; int member_1; } ;
typedef int * libbpf_print_fn_t ;
struct TYPE_2__ {scalar_t__ verifier_stats; } ;


 int FUNC_0 (struct scale_test_def*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_5 ;
 int * VAR_6 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 struct scale_test_def VAR_7[] = {
  { "loop3.o", VAR_2, 1 },

  { "test_verif_scale1.o", VAR_3 },
  { "test_verif_scale2.o", VAR_3 },
  { "test_verif_scale3.o", VAR_3 },


  { "pyperf50.o", VAR_2 },
  { "pyperf100.o", VAR_2 },
  { "pyperf180.o", VAR_2 },







  { "pyperf600.o", VAR_2 },







  { "pyperf600_nounroll.o", VAR_2 },

  { "loop1.o", VAR_2 },
  { "loop2.o", VAR_2 },
  { "loop4.o", VAR_3 },
  { "loop5.o", VAR_3 },





  { "strobemeta.o", VAR_2 },


  { "strobemeta_nounroll1.o", VAR_2 },
  { "strobemeta_nounroll2.o", VAR_2 },

  { "test_sysctl_loop1.o", VAR_0 },
  { "test_sysctl_loop2.o", VAR_0 },

  { "test_xdp_loop.o", VAR_4 },
  { "test_seg6_loop.o", VAR_1 },
 };
 libbpf_print_fn_t VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 if (VAR_5.verifier_stats) {
  FUNC_4();
  VAR_8 = FUNC_3(VAR_6);
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {
  const struct scale_test_def *VAR_11 = &VAR_7[VAR_10];

  if (!FUNC_5(VAR_11->file))
   continue;

  VAR_9 = FUNC_2(VAR_11->file, VAR_11->attach_type);
  FUNC_1(VAR_9 && !VAR_11->fails);
 }

 if (VAR_5.verifier_stats)
  FUNC_3(VAR_8);
}

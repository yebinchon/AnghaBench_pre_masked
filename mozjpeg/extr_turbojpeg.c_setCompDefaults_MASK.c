
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_compress_struct {int restart_interval; int restart_in_rows; int num_components; TYPE_2__* comp_info; TYPE_1__* master; int dct_method; void* arith_code; void* optimize_coding; int input_components; int in_color_space; } ;
struct TYPE_4__ {int h_samp_factor; int v_samp_factor; } ;
struct TYPE_3__ {scalar_t__ compress_profile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct jpeg_compress_struct*,int ) ;
 int FUNC_2 (struct jpeg_compress_struct*) ;
 int FUNC_3 (struct jpeg_compress_struct*,int,void*) ;
 int FUNC_4 (struct jpeg_compress_struct*) ;
 int * VAR_12 ;
 int FUNC_5 (char*,char*,int*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int* VAR_13 ;
 int* VAR_14 ;
 int * VAR_15 ;
 char FUNC_8 (char) ;

__attribute__((used)) static int FUNC_9(struct jpeg_compress_struct *VAR_16, int VAR_17,
                           int VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21=0;
 char *VAR_22=((void*)0);

  VAR_16->in_color_space = VAR_12[VAR_17];
 VAR_16->input_components=VAR_15[VAR_17];
 if((VAR_22=FUNC_0("TJ_REVERT"))!=((void*)0) && FUNC_7(VAR_22)>0 && !FUNC_6(VAR_22, "1"))
  VAR_16->master->compress_profile=VAR_0;
 FUNC_2(VAR_16);


  if ((VAR_22 = FUNC_0("TJ_OPTIMIZE")) != ((void*)0) && FUNC_7(VAR_22) > 0 &&
      !FUNC_6(VAR_22, "1"))
  VAR_16->optimize_coding=VAR_11;
  if ((VAR_22 = FUNC_0("TJ_ARITHMETIC")) != ((void*)0) && FUNC_7(VAR_22) > 0 &&
      !FUNC_6(VAR_22, "1"))
  VAR_16->arith_code=VAR_11;
  if ((VAR_22 = FUNC_0("TJ_RESTART")) != ((void*)0) && FUNC_7(VAR_22) > 0) {
    int VAR_23 = -1;
    char VAR_24 = 0;

    if (FUNC_5(VAR_22, "%d%c", &VAR_23, &VAR_24) >= 1 && VAR_23 >= 0 &&
        VAR_23 <= 65535) {
      if (FUNC_8(VAR_24) == 'B') {
    VAR_16->restart_interval=VAR_23;
    VAR_16->restart_in_rows=0;
      } else
    VAR_16->restart_in_rows=VAR_23;
  }
 }


  if (VAR_19 >= 0) {
  FUNC_3(VAR_16, VAR_19, VAR_11);
    if (VAR_19 >= 96 || VAR_20 & VAR_7)
      VAR_16->dct_method = VAR_6;
    else
      VAR_16->dct_method = VAR_5;
 }
 if(VAR_18==VAR_10)
  FUNC_1(VAR_16, VAR_2);
 else if(VAR_17==VAR_9)
  FUNC_1(VAR_16, VAR_3);
  else
    FUNC_1(VAR_16, VAR_4);

  if (VAR_20 & VAR_8)
    FUNC_4(VAR_16);

  else if ((VAR_22 = FUNC_0("TJ_PROGRESSIVE")) != ((void*)0) && FUNC_7(VAR_22) > 0 &&
           !FUNC_6(VAR_22, "1"))
  FUNC_4(VAR_16);



 if(VAR_16->master->compress_profile == VAR_1)
  FUNC_4(VAR_16);

 VAR_16->comp_info[0].h_samp_factor=VAR_14[VAR_18]/8;
 VAR_16->comp_info[1].h_samp_factor=1;
 VAR_16->comp_info[2].h_samp_factor=1;
 if(VAR_16->num_components>3)
  VAR_16->comp_info[3].h_samp_factor=VAR_14[VAR_18]/8;
 VAR_16->comp_info[0].v_samp_factor=VAR_13[VAR_18]/8;
 VAR_16->comp_info[1].v_samp_factor=1;
 VAR_16->comp_info[2].v_samp_factor=1;
 if(VAR_16->num_components>3)
  VAR_16->comp_info[3].v_samp_factor=VAR_13[VAR_18]/8;

 return VAR_21;
}

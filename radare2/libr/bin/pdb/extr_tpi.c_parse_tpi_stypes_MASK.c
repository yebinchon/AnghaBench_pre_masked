
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned short leaf_type; void* type_info; } ;
struct TYPE_4__ {int length; TYPE_3__ type_data; } ;
typedef TYPE_1__ SType ;
typedef int SLF_POINTER ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (int ,int ) ;
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
 int VAR_11 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned char*,unsigned int*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int,char*) ;

__attribute__((used)) static int FUNC_7(R_STREAM_FILE *VAR_24, SType *VAR_25) {
 unsigned char *VAR_26;
 unsigned int VAR_27 = 0;

 FUNC_6(VAR_24, 2, (char *)&VAR_25->length);
 if (VAR_25->length < 1) {
  return 0;
 }
 VAR_26 = (unsigned char *) FUNC_3(VAR_25->length);
 if (!VAR_26) {
  return 0;
 }
 FUNC_6 (VAR_24, VAR_25->length, (char *)VAR_26);
 VAR_25->type_data.leaf_type = *(unsigned short *)VAR_26;
 VAR_27 += 2;
 switch (VAR_25->type_data.leaf_type) {
 case 136:

  FUNC_0(VAR_5, VAR_17);
  break;
 case 137:

  FUNC_0(VAR_4, VAR_16);
  break;

 case 138:

  FUNC_0(VAR_3, VAR_15);
  break;
 case 130:

  FUNC_0(VAR_9, VAR_21);
  break;
 case 132:

 {
  SLF_POINTER *VAR_28 = (SLF_POINTER *) FUNC_3(sizeof(SLF_POINTER)); if (!VAR_28) { FUNC_1 (VAR_26); return 0; } FUNC_4(VAR_28, VAR_26 + 2, &VAR_27, VAR_25->length); VAR_25->type_data.type_info = (void *) VAR_28; FUNC_2(&VAR_25->type_data); }
  break;
 case 140:

  FUNC_0(VAR_1, VAR_13);
  break;
 case 133:

  FUNC_0(VAR_7, VAR_19);
  break;
 case 141:

  FUNC_0(VAR_0, VAR_12);
  break;
 case 134:

  FUNC_0(VAR_6, VAR_18);
  break;
 case 135:

  break;
 case 131:

  FUNC_0(VAR_8, VAR_20);
  break;
 case 129:

  FUNC_0(VAR_10, VAR_22);
  break;
 case 139:

  FUNC_0(VAR_2, VAR_14);
  break;
 case 128:

  FUNC_0(VAR_11, VAR_23);
  break;
 default:
  FUNC_5("parse_tpi_streams(): unsupported leaf type\n");
  break;
 }

 FUNC_1 (VAR_26);
 return VAR_27;
}

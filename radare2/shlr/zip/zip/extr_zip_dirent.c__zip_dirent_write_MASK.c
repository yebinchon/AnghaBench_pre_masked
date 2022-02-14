
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint32_t ;
typedef unsigned short zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {struct zip_extra_field* next; } ;
struct zip_error {int dummy; } ;
struct zip_dirent {int bitflags; scalar_t__ comp_size; scalar_t__ uncomp_size; scalar_t__ offset; int version_madeby; int version_needed; scalar_t__ crc; unsigned short int_attrib; scalar_t__ ext_attrib; scalar_t__ comment; struct zip_extra_field* extra_fields; scalar_t__ filename; scalar_t__ disk_number; int last_mod; scalar_t__ comp_method; } ;
typedef enum zip_encoding_type { ____Placeholder_zip_encoding_type } zip_encoding_type ;
typedef int FILE ;


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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct zip_dirent*,int) ;
 int FUNC_1 (struct zip_extra_field*) ;
 struct zip_extra_field* FUNC_2 (int ,unsigned short,int *,int) ;
 unsigned short FUNC_3 (struct zip_extra_field*,int) ;
 struct zip_extra_field* FUNC_4 (int ,scalar_t__,struct zip_error*) ;
 int FUNC_5 (struct zip_extra_field*,int,int *) ;
 int FUNC_6 (struct zip_error*,int ,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int **) ;
 unsigned short FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int ,unsigned short*,unsigned short*) ;
 int FUNC_12 (unsigned short,int *) ;
 int FUNC_13 (scalar_t__,int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int ,int,int,int *) ;

int
FUNC_16(struct zip_dirent *VAR_15, FILE *VAR_16, zip_flags_t VAR_17, struct zip_error *VAR_18)
{
    unsigned short VAR_19, VAR_20;
    enum zip_encoding_type VAR_21, VAR_22;
    struct zip_extra_field *VAR_23;
    zip_uint8_t VAR_24[24], *VAR_25;
    int VAR_26;
    int VAR_27;

    VAR_23 = ((void*)0);

    VAR_26 = 0;

    FUNC_15((VAR_17 & VAR_11) ? VAR_1 : VAR_0, 1, 4, VAR_16);

    VAR_22 = FUNC_7(VAR_15->filename, VAR_7);
    VAR_21 = FUNC_7(VAR_15->comment, VAR_7);

    if ((VAR_22 == VAR_8 && VAR_21 == VAR_6) ||
 (VAR_22 == VAR_6 && VAR_21 == VAR_8) ||
 (VAR_22 == VAR_8 && VAR_21 == VAR_8))
 VAR_15->bitflags |= VAR_12;
    else {
 VAR_15->bitflags &= ~VAR_12;
 if (VAR_22 == VAR_8) {
     VAR_23 = FUNC_4(VAR_4, VAR_15->filename, VAR_18);
     if (VAR_23 == ((void*)0))
  return -1;
 }
 if ((VAR_17 & VAR_11) == 0 && VAR_21 == VAR_8){
     struct zip_extra_field *VAR_28 = FUNC_4(VAR_3, VAR_15->comment, VAR_18);
     if (VAR_28 == ((void*)0)) {
  FUNC_1(VAR_23);
  return -1;
     }
     VAR_28->next = VAR_23;
     VAR_23 = VAR_28;
 }
    }

    VAR_25 = VAR_24;
    if (VAR_17 & VAR_11) {
 if ((VAR_17 & VAR_10) || VAR_15->comp_size > VAR_13 || VAR_15->uncomp_size > VAR_13) {
     FUNC_8(VAR_15->comp_size, &VAR_25);
     FUNC_8(VAR_15->uncomp_size, &VAR_25);
 }
    }
    else {
 if ((VAR_17 & VAR_10) || VAR_15->comp_size > VAR_13 || VAR_15->uncomp_size > VAR_13 || VAR_15->offset > VAR_13) {
     if (VAR_15->comp_size >= VAR_13)
  FUNC_8(VAR_15->comp_size, &VAR_25);
     if (VAR_15->uncomp_size >= VAR_13)
  FUNC_8(VAR_15->uncomp_size, &VAR_25);
     if (VAR_15->offset >= VAR_13)
  FUNC_8(VAR_15->offset, &VAR_25);
 }
    }

    if (VAR_25 != VAR_24) {
 struct zip_extra_field *VAR_29 = FUNC_2(VAR_5, (zip_uint16_t)(VAR_25-VAR_24), VAR_24, VAR_2);
 VAR_29->next = VAR_23;
 VAR_23 = VAR_29;
 VAR_26 = 1;
    }

    if ((VAR_17 & (VAR_11|VAR_10)) == (VAR_11|VAR_10))
 VAR_27 = FUNC_0(VAR_15, VAR_17);
    else
 VAR_27 = VAR_26;

    if ((VAR_17 & VAR_11) == 0)
 FUNC_12(VAR_27 ? 45 : VAR_15->version_madeby, VAR_16);
    FUNC_12(VAR_27 ? 45 : VAR_15->version_needed, VAR_16);
    FUNC_12(VAR_15->bitflags&0xfff9, VAR_16);
    FUNC_12((zip_uint16_t)VAR_15->comp_method, VAR_16);

    FUNC_11(VAR_15->last_mod, &VAR_19, &VAR_20);
    FUNC_12(VAR_19, VAR_16);
    FUNC_12(VAR_20, VAR_16);

    FUNC_13(VAR_15->crc, VAR_16);
    if (VAR_15->comp_size < VAR_13)
 FUNC_13((zip_uint32_t)VAR_15->comp_size, VAR_16);
    else
 FUNC_13(VAR_13, VAR_16);
    if (VAR_15->uncomp_size < VAR_13)
 FUNC_13((zip_uint32_t)VAR_15->uncomp_size, VAR_16);
    else
 FUNC_13(VAR_13, VAR_16);

    FUNC_12(FUNC_9(VAR_15->filename), VAR_16);
    FUNC_12(FUNC_3(VAR_15->extra_fields, VAR_17) + FUNC_3(VAR_23, VAR_2), VAR_16);

    if ((VAR_17 & VAR_11) == 0) {
 FUNC_12(FUNC_9(VAR_15->comment), VAR_16);
 FUNC_12((zip_uint16_t)VAR_15->disk_number, VAR_16);
 FUNC_12(VAR_15->int_attrib, VAR_16);
 FUNC_13(VAR_15->ext_attrib, VAR_16);
 if (VAR_15->offset < VAR_13)
     FUNC_13((zip_uint32_t)VAR_15->offset, VAR_16);
 else
     FUNC_13(VAR_13, VAR_16);
    }

    if (VAR_15->filename)
 FUNC_10(VAR_15->filename, VAR_16);

    if (VAR_23)
 FUNC_5(VAR_23, VAR_2, VAR_16);
    if (VAR_15->extra_fields)
 FUNC_5(VAR_15->extra_fields, VAR_17, VAR_16);

    if ((VAR_17 & VAR_11) == 0) {
 if (VAR_15->comment)
     FUNC_10(VAR_15->comment, VAR_16);
    }

    FUNC_1(VAR_23);

    if (FUNC_14(VAR_16)) {
 FUNC_6(VAR_18, VAR_9, VAR_14);
 return -1;
    }

    return VAR_26;
}

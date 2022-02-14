
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int val ;
struct TYPE_14__ {int is_fixed_pitch; scalar_t__ italic_angle; scalar_t__ weight; scalar_t__ family_name; scalar_t__ full_name; scalar_t__ notice; scalar_t__ version; int underline_thickness; int underline_position; } ;
struct TYPE_13__ {int fs_type; } ;
struct TYPE_12__ {int num_blue_values; int num_other_blues; int num_family_blues; int num_family_other_blues; int num_snap_widths; int num_snap_heights; int round_stem_up; int force_bold; scalar_t__ password; scalar_t__ language_group; int lenIV; int * min_feature; int * snap_heights; int * snap_widths; int * family_other_blues; int * family_blues; int * other_blues; int blue_shift; int blue_fuzz; int blue_scale; int * blue_values; int * standard_height; int * standard_width; int unique_id; } ;
struct TYPE_11__ {scalar_t__* char_name; int num_chars; } ;
struct TYPE_10__ {int yMax; int xMax; int yMin; int xMin; } ;
struct TYPE_9__ {int yy; int yx; int xy; int xx; } ;
struct TYPE_15__ {int font_type; int paint_type; TYPE_6__ font_info; TYPE_5__ font_extra; TYPE_4__ private_dict; scalar_t__* subrs; int * subrs_len; int num_subrs; int subrs_hash; TYPE_3__ encoding; int encoding_type; scalar_t__* charstrings; int * charstrings_len; int num_glyphs; scalar_t__* glyph_names; scalar_t__ font_name; TYPE_2__ font_bbox; TYPE_1__ font_matrix; } ;
struct TYPE_16__ {TYPE_7__ type1; } ;
typedef TYPE_7__* T1_Font ;
typedef TYPE_8__* T1_Face ;
typedef int T1_EncodingType ;
typedef int PS_Dict_Keys ;
typedef int FT_UShort ;
typedef size_t FT_ULong ;
typedef int FT_UInt ;
typedef int FT_Short ;
typedef scalar_t__ FT_Long ;
typedef int FT_Int ;
typedef int FT_Fixed ;
typedef int FT_Face ;
typedef int FT_Char ;
typedef int FT_Byte ;
typedef int FT_Bool ;
 int VAR_0 ;
 size_t* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static FT_Long
  FUNC_3( FT_Face VAR_1,
                        PS_Dict_Keys VAR_2,
                        FT_UInt VAR_3,
                        void *VAR_4,
                        FT_Long VAR_5 )
  {
    FT_ULong VAR_6 = 0;
    FT_ULong VAR_7 = VAR_5 < 0 ? 0 : (FT_ULong)VAR_5;

    T1_Face VAR_8 = (T1_Face)VAR_1;
    T1_Font VAR_9 = &VAR_8->type1;


    switch ( VAR_2 )
    {
    case 159:
      VAR_6 = sizeof ( VAR_9->font_type );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->font_type;
      break;

    case 161:
      if ( VAR_3 < sizeof ( VAR_9->font_matrix ) /
                   sizeof ( VAR_9->font_matrix.xx ) )
      {
        FT_Fixed VAR_10 = 0;


        VAR_6 = sizeof ( VAR_10 );
        if ( VAR_4 && VAR_7 >= VAR_6 )
        {
          switch ( VAR_3 )
          {
          case 0:
            VAR_10 = VAR_9->font_matrix.xx;
            break;
          case 1:
            VAR_10 = VAR_9->font_matrix.xy;
            break;
          case 2:
            VAR_10 = VAR_9->font_matrix.yx;
            break;
          case 3:
            VAR_10 = VAR_9->font_matrix.yy;
            break;
          }
          *((FT_Fixed *)VAR_4) = VAR_10;
        }
      }
      break;

    case 162:
      if ( VAR_3 < sizeof ( VAR_9->font_bbox ) /
                   sizeof ( VAR_9->font_bbox.xMin ) )
      {
        FT_Fixed VAR_11 = 0;


        VAR_6 = sizeof ( VAR_11 );
        if ( VAR_4 && VAR_7 >= VAR_6 )
        {
          switch ( VAR_3 )
          {
          case 0:
            VAR_11 = VAR_9->font_bbox.xMin;
            break;
          case 1:
            VAR_11 = VAR_9->font_bbox.yMin;
            break;
          case 2:
            VAR_11 = VAR_9->font_bbox.xMax;
            break;
          case 3:
            VAR_11 = VAR_9->font_bbox.yMax;
            break;
          }
          *((FT_Fixed *)VAR_4) = VAR_11;
        }
      }
      break;

    case 140:
      VAR_6 = sizeof ( VAR_9->paint_type );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->paint_type;
      break;

    case 160:
      if ( VAR_9->font_name )
      {
        VAR_6 = FUNC_2( VAR_9->font_name ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_name ), VAR_6 );
      }
      break;

    case 130:
      VAR_6 = sizeof ( VAR_9->private_dict.unique_id );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->private_dict.unique_id;
      break;

    case 148:
      VAR_6 = sizeof ( VAR_9->num_glyphs );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->num_glyphs;
      break;

    case 168:
      if ( VAR_3 < (FT_UInt)VAR_9->num_glyphs )
      {
        VAR_6 = FUNC_2( VAR_9->glyph_names[VAR_3] ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
        {
          FUNC_1( VAR_4, (void *)( VAR_9->glyph_names[VAR_3] ), VAR_6 );
          ((FT_Char *)VAR_4)[VAR_6 - 1] = (FT_Char)'\0';
        }
      }
      break;

    case 169:
      if ( VAR_3 < (FT_UInt)VAR_9->num_glyphs )
      {
        VAR_6 = VAR_9->charstrings_len[VAR_3] + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
        {
          FUNC_1( VAR_4, (void *)( VAR_9->charstrings[VAR_3] ),
                     VAR_6 - 1 );
          ((FT_Char *)VAR_4)[VAR_6 - 1] = (FT_Char)'\0';
        }
      }
      break;

    case 166:
      VAR_6 = sizeof ( VAR_9->encoding_type );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((T1_EncodingType *)VAR_4) = VAR_9->encoding_type;
      break;

    case 167:
      if ( VAR_9->encoding_type == VAR_0 &&
           VAR_3 < (FT_UInt)VAR_9->encoding.num_chars )
      {
        VAR_6 = FUNC_2( VAR_9->encoding.char_name[VAR_3] ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
        {
          FUNC_1( VAR_4, (void *)( VAR_9->encoding.char_name[VAR_3] ),
                     VAR_6 - 1 );
          ((FT_Char *)VAR_4)[VAR_6 - 1] = (FT_Char)'\0';
        }
      }
      break;

    case 142:
      VAR_6 = sizeof ( VAR_9->num_subrs );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->num_subrs;
      break;

    case 133:
      {
        FT_Bool VAR_12 = 0;


        if ( VAR_9->subrs_hash )
        {

          size_t* VAR_13 = FUNC_0( (FT_Int)VAR_3,
                                             VAR_9->subrs_hash );


          if ( VAR_13 )
          {
            VAR_3 = *VAR_13;
            VAR_12 = 1;
          }
        }
        else
        {
          if ( VAR_3 < (FT_UInt)VAR_9->num_subrs )
            VAR_12 = 1;
        }

        if ( VAR_12 && VAR_9->subrs )
        {
          VAR_6 = VAR_9->subrs_len[VAR_3] + 1;
          if ( VAR_4 && VAR_7 >= VAR_6 )
          {
            FUNC_1( VAR_4, (void *)( VAR_9->subrs[VAR_3] ), VAR_6 - 1 );
            ((FT_Char *)VAR_4)[VAR_6 - 1] = (FT_Char)'\0';
          }
        }
      }
      break;

    case 137:
      VAR_6 = sizeof ( VAR_9->private_dict.standard_width[0] );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_UShort *)VAR_4) = VAR_9->private_dict.standard_width[0];
      break;

    case 136:
      VAR_6 = sizeof ( VAR_9->private_dict.standard_height[0] );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_UShort *)VAR_4) = VAR_9->private_dict.standard_height[0];
      break;

    case 149:
      VAR_6 = sizeof ( VAR_9->private_dict.num_blue_values );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_blue_values;
      break;

    case 170:
      if ( VAR_3 < VAR_9->private_dict.num_blue_values )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.blue_values[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.blue_values[VAR_3];
      }
      break;

    case 172:
      VAR_6 = sizeof ( VAR_9->private_dict.blue_scale );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Fixed *)VAR_4) = VAR_9->private_dict.blue_scale;
      break;

    case 173:
      VAR_6 = sizeof ( VAR_9->private_dict.blue_fuzz );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->private_dict.blue_fuzz;
      break;

    case 171:
      VAR_6 = sizeof ( VAR_9->private_dict.blue_shift );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->private_dict.blue_shift;
      break;

    case 145:
      VAR_6 = sizeof ( VAR_9->private_dict.num_other_blues );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_other_blues;
      break;

    case 141:
      if ( VAR_3 < VAR_9->private_dict.num_other_blues )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.other_blues[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.other_blues[VAR_3];
      }
      break;

    case 147:
      VAR_6 = sizeof ( VAR_9->private_dict.num_family_blues );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_family_blues;
      break;

    case 165:
      if ( VAR_3 < VAR_9->private_dict.num_family_blues )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.family_blues[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.family_blues[VAR_3];
      }
      break;

    case 146:
      VAR_6 = sizeof ( VAR_9->private_dict.num_family_other_blues );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_family_other_blues;
      break;

    case 163:
      if ( VAR_3 < VAR_9->private_dict.num_family_other_blues )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.family_other_blues[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.family_other_blues[VAR_3];
      }
      break;

    case 144:
      VAR_6 = sizeof ( VAR_9->private_dict.num_snap_widths );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_snap_widths;
      break;

    case 135:
      if ( VAR_3 < VAR_9->private_dict.num_snap_widths )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.snap_widths[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.snap_widths[VAR_3];
      }
      break;

    case 143:
      VAR_6 = sizeof ( VAR_9->private_dict.num_snap_heights );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Byte *)VAR_4) = VAR_9->private_dict.num_snap_heights;
      break;

    case 134:
      if ( VAR_3 < VAR_9->private_dict.num_snap_heights )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.snap_heights[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.snap_heights[VAR_3];
      }
      break;

    case 138:
      VAR_6 = sizeof ( VAR_9->private_dict.round_stem_up );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Bool *)VAR_4) = VAR_9->private_dict.round_stem_up;
      break;

    case 158:
      VAR_6 = sizeof ( VAR_9->private_dict.force_bold );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Bool *)VAR_4) = VAR_9->private_dict.force_bold;
      break;

    case 151:
      if ( VAR_3 < sizeof ( VAR_9->private_dict.min_feature ) /
                   sizeof ( VAR_9->private_dict.min_feature[0] ) )
      {
        VAR_6 = sizeof ( VAR_9->private_dict.min_feature[VAR_3] );
        if ( VAR_4 && VAR_7 >= VAR_6 )
          *((FT_Short *)VAR_4) = VAR_9->private_dict.min_feature[VAR_3];
      }
      break;

    case 152:
      VAR_6 = sizeof ( VAR_9->private_dict.lenIV );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Int *)VAR_4) = VAR_9->private_dict.lenIV;
      break;

    case 139:
      VAR_6 = sizeof ( VAR_9->private_dict.password );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Long *)VAR_4) = VAR_9->private_dict.password;
      break;

    case 153:
      VAR_6 = sizeof ( VAR_9->private_dict.language_group );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Long *)VAR_4) = VAR_9->private_dict.language_group;
      break;

    case 155:
      VAR_6 = sizeof ( VAR_9->font_info.is_fixed_pitch );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Bool *)VAR_4) = VAR_9->font_info.is_fixed_pitch;
      break;

    case 132:
      VAR_6 = sizeof ( VAR_9->font_info.underline_position );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Short *)VAR_4) = VAR_9->font_info.underline_position;
      break;

    case 131:
      VAR_6 = sizeof ( VAR_9->font_info.underline_thickness );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_UShort *)VAR_4) = VAR_9->font_info.underline_thickness;
      break;

    case 157:
      VAR_6 = sizeof ( VAR_9->font_extra.fs_type );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_UShort *)VAR_4) = VAR_9->font_extra.fs_type;
      break;

    case 129:
      if ( VAR_9->font_info.version )
      {
        VAR_6 = FUNC_2( VAR_9->font_info.version ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_info.version ), VAR_6 );
      }
      break;

    case 150:
      if ( VAR_9->font_info.notice )
      {
        VAR_6 = FUNC_2( VAR_9->font_info.notice ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_info.notice ), VAR_6 );
      }
      break;

    case 156:
      if ( VAR_9->font_info.full_name )
      {
        VAR_6 = FUNC_2( VAR_9->font_info.full_name ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_info.full_name ), VAR_6 );
      }
      break;

    case 164:
      if ( VAR_9->font_info.family_name )
      {
        VAR_6 = FUNC_2( VAR_9->font_info.family_name ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_info.family_name ),
                     VAR_6 );
      }
      break;

    case 128:
      if ( VAR_9->font_info.weight )
      {
        VAR_6 = FUNC_2( VAR_9->font_info.weight ) + 1;
        if ( VAR_4 && VAR_7 >= VAR_6 )
          FUNC_1( VAR_4, (void *)( VAR_9->font_info.weight ), VAR_6 );
      }
      break;

    case 154:
      VAR_6 = sizeof ( VAR_9->font_info.italic_angle );
      if ( VAR_4 && VAR_7 >= VAR_6 )
        *((FT_Long *)VAR_4) = VAR_9->font_info.italic_angle;
      break;
    }

    return VAR_6 == 0 ? -1 : (FT_Long)VAR_6;
  }

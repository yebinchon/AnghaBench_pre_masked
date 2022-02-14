
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_22__ ;
typedef struct TYPE_42__ TYPE_21__ ;
typedef struct TYPE_41__ TYPE_20__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_19__ ;
typedef struct TYPE_38__ TYPE_18__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct strm_lambda {int * body; int type; int * state; } ;
struct strm_genfunc {int * body; int type; int * state; } ;
typedef void* strm_value ;
typedef int strm_string ;
struct TYPE_40__ {TYPE_17__* exc; } ;
typedef TYPE_1__ strm_stream ;
typedef int strm_state ;
typedef size_t strm_int ;
typedef int * strm_ary_ns ;
typedef int strm_ary_headers ;
typedef void* strm_array ;
struct TYPE_44__ {int utc_offset; int usec; int sec; } ;
typedef TYPE_2__ node_time ;
struct TYPE_45__ {int value; } ;
typedef TYPE_3__ node_str ;
struct TYPE_46__ {TYPE_22__* node; } ;
typedef TYPE_4__ node_splat ;
struct TYPE_47__ {scalar_t__ rv; } ;
typedef TYPE_5__ node_return ;
struct TYPE_48__ {int op; TYPE_22__* rhs; TYPE_22__* lhs; } ;
typedef TYPE_6__ node_op ;
struct TYPE_49__ {TYPE_22__* body; int name; } ;
typedef TYPE_7__ node_ns ;
struct TYPE_50__ {int len; TYPE_22__** data; } ;
typedef TYPE_8__ node_nodes ;
struct TYPE_51__ {int lhs; TYPE_22__* rhs; } ;
typedef TYPE_9__ node_let ;
typedef int node_lambda ;
struct TYPE_30__ {int value; } ;
typedef TYPE_10__ node_int ;
struct TYPE_31__ {int name; } ;
typedef TYPE_11__ node_import ;
struct TYPE_32__ {TYPE_22__* opt_else; TYPE_22__* then; TYPE_22__* cond; } ;
typedef TYPE_12__ node_if ;
struct TYPE_33__ {int name; } ;
typedef TYPE_13__ node_ident ;
struct TYPE_34__ {int id; } ;
typedef TYPE_14__ node_genfunc ;
struct TYPE_35__ {int value; } ;
typedef TYPE_15__ node_float ;
struct TYPE_36__ {TYPE_22__* args; TYPE_22__* func; } ;
typedef TYPE_16__ node_fcall ;
struct TYPE_37__ {int lineno; int fname; } ;
typedef TYPE_17__ node_error ;
struct TYPE_38__ {scalar_t__ emit; } ;
typedef TYPE_18__ node_emit ;
struct TYPE_39__ {int ident; TYPE_22__* args; } ;
typedef TYPE_19__ node_call ;
struct TYPE_41__ {int value; } ;
typedef TYPE_20__ node_bool ;
struct TYPE_42__ {int len; int ns; int headers; TYPE_22__** data; } ;
typedef TYPE_21__ node_array ;
struct TYPE_43__ {int type; int lineno; int fname; } ;
typedef TYPE_22__ node ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int,void**,void**) ;
 int FUNC_4 (void**) ;
 struct strm_lambda* FUNC_5 (int *,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int *,int) ;
 void** FUNC_12 (void*) ;
 void* FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*,void*,int *) ;
 int FUNC_17 (int *,int *) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*,void*,int,void**,void**) ;
 void* FUNC_20 (int ) ;
 int FUNC_21 (void*) ;
 void* FUNC_22 () ;
 int * FUNC_23 (int *,int ) ;
 int * FUNC_24 (int ) ;
 void* FUNC_25 (struct strm_lambda*) ;
 int FUNC_26 (TYPE_1__*,char*) ;
 int FUNC_27 (TYPE_1__*,int ,void*) ;
 int * VAR_8 ;
 void* FUNC_28 (int ) ;
 void* FUNC_29 (int ,int ,int ) ;
 void* FUNC_30 (void*) ;
 int FUNC_31 (void*) ;
 int FUNC_32 (int *,int ,void**) ;
 int FUNC_33 (int *,int ,void*) ;

__attribute__((used)) static int
FUNC_34(strm_stream* VAR_9, strm_state* VAR_10, node* VAR_11, strm_value* VAR_12)
{
  int VAR_13;

  if (VAR_11 == ((void*)0)) {
    return VAR_4;
  }

  switch (VAR_11->type) {




  case 134:
    {
      node_ns* VAR_14 = (node_ns*)VAR_11;
      strm_string VAR_15 = FUNC_8(VAR_14->name);
      strm_state* VAR_16 = FUNC_23(VAR_10, VAR_15);

      if (!VAR_16) {
        if (FUNC_24(VAR_15)) {
          FUNC_26(VAR_9, "namespace already exists");
        }
        else {
          FUNC_26(VAR_9, "failed to create namespace");
        }
        return VAR_4;
      }
      FUNC_1(VAR_16);
      if (VAR_14->body)
        return FUNC_34(VAR_9, VAR_16, VAR_14->body, VAR_12);
      return VAR_5;
    }

  case 140:
    {
      node_import *VAR_17 = (node_import*)VAR_11;
      strm_state* VAR_18 = FUNC_24(FUNC_8(VAR_17->name));
      if (!VAR_18) {
        FUNC_26(VAR_9, "no such namespace");
        return VAR_4;
      }
      VAR_13 = FUNC_17(VAR_10, VAR_18);
      if (VAR_13) {
        FUNC_26(VAR_9, "failed to import");
        return VAR_13;
      }
      return VAR_5;
    }
    break;

  case 130:
    FUNC_27(VAR_9, VAR_2, FUNC_22());
    return VAR_4;
  case 146:
    {
      int VAR_19, VAR_20;
      node_array* VAR_21;

      VAR_21 = (node_array*)((node_emit*)VAR_11)->emit;
      if (!VAR_21) {
        FUNC_16(VAR_9, FUNC_22(), ((void*)0));
      }
      else {
        for (VAR_19 = 0; VAR_19 < VAR_21->len; VAR_19++) {
          VAR_20 = FUNC_34(VAR_9, VAR_10, VAR_21->data[VAR_19], VAR_12);
          if (VAR_20) return VAR_20;
          FUNC_16(VAR_9, *VAR_12, ((void*)0));
        }
      }
      return VAR_5;
    }
    break;
  case 137:
    {
      node_let *VAR_22 = (node_let*)VAR_11;
      VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_22->rhs, VAR_12);
      if (VAR_13) {
        FUNC_26(VAR_9, "failed to assign");
        return VAR_13;
      }
      return FUNC_33(VAR_10, FUNC_8(VAR_22->lhs), *VAR_12);
    }
  case 149:
    {
      node_array* VAR_23 = (node_array*)VAR_11;
      strm_array VAR_24 = FUNC_11(((void*)0), VAR_23->len);
      strm_value *VAR_25 = FUNC_12(VAR_24);
      int VAR_26 = VAR_0;

      for (int VAR_27 = 0; VAR_27 < VAR_23->len; VAR_27++) {
        if (VAR_23->data[VAR_27]->type == VAR_3) {
          node_splat* VAR_28 = (node_splat*)VAR_23->data[VAR_27];
          VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_28->node, &VAR_25[VAR_27]);
          if (VAR_13) return VAR_13;
          if (!FUNC_9(VAR_25[VAR_27])) {
            FUNC_26(VAR_9, "splat requires array");
            return VAR_4;
          }
          VAR_26 = VAR_7;
        }
        else {
          VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_23->data[VAR_27], &VAR_25[VAR_27]);
          if (VAR_13) return VAR_13;
        }
      }
      if (VAR_26) {
        int VAR_29 = VAR_23->len;

        if (VAR_23->headers) {
          FUNC_26(VAR_9, "label(s) and splat(s) in an array");
          return VAR_4;
        }
        for (int VAR_30 = 0; VAR_30 < VAR_23->len; VAR_30++) {
          if (VAR_23->data[VAR_30]->type == VAR_3) {
            strm_array VAR_31 = FUNC_30(VAR_25[VAR_30]);
            VAR_29 += FUNC_10(VAR_31)-1;
          }
        }
        if (VAR_29 > VAR_23->len) {
          strm_value* VAR_32;

          VAR_24 = FUNC_11(((void*)0), VAR_29);
          VAR_32 = FUNC_12(VAR_24);
          for (int VAR_33 = 0; VAR_33 < VAR_23->len; VAR_33++) {
            if (VAR_23->data[VAR_33]->type == VAR_3) {
              strm_array VAR_34 = FUNC_30(VAR_25[VAR_33]);
              int VAR_35 = FUNC_10(VAR_34);
              strm_value* VAR_36 = FUNC_12(VAR_34);
              for (int VAR_37=0; VAR_37<VAR_35; VAR_37++) {
                *VAR_32++ = VAR_36[VAR_37];
              }
            }
            else {
              *VAR_32++ = VAR_25[VAR_33];
            }
          }
        }
      }
      else if (VAR_23->headers) {
        strm_ary_headers(VAR_38) = FUNC_2(VAR_23->headers, VAR_23->len);
      }
      if (VAR_23->ns) {
        strm_state* VAR_39 = FUNC_24(FUNC_8(VAR_23->ns));
        if (!FUNC_0(VAR_39)) {
          FUNC_26(VAR_9, "instantiating primitive class");
          return VAR_4;
        }
        strm_ary_ns(VAR_40) = VAR_39;
      }
      else {
        strm_ary_ns(VAR_41) = VAR_8;
      }
      *VAR_12 = FUNC_13(VAR_24);
      return VAR_5;
    }
  case 142:
    {
      node_ident* VAR_42 = (node_ident*)VAR_11;
      VAR_13 = FUNC_32(VAR_10, FUNC_8(VAR_42->name), VAR_12);
      if (VAR_13) {
        FUNC_26(VAR_9, "failed to reference variable");
      }
      return VAR_13;
    }
  case 141:
    {
      strm_value VAR_43;
      node_if* VAR_44 = (node_if*)VAR_11;
      VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_44->cond, &VAR_43);
      if (VAR_13) return VAR_13;
      if (FUNC_14(VAR_43) && FUNC_31(VAR_43)) {
        return FUNC_34(VAR_9, VAR_10, VAR_44->then, VAR_12);
      }
      else if (VAR_44->opt_else != ((void*)0)) {
        return FUNC_34(VAR_9, VAR_10, VAR_44->opt_else, VAR_12);
      }
      else {
        *VAR_12 = FUNC_22();
        return VAR_5;
      }
    }
    break;
  case 133:
    {
      node_op* VAR_45 = (node_op*)VAR_11;
      strm_value VAR_46[2];
      int VAR_47=0;

      if (VAR_45->lhs) {
        VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_45->lhs, &VAR_46[VAR_47++]);
        if (VAR_13) return VAR_13;
      }
      if (VAR_45->rhs) {
        VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_45->rhs, &VAR_46[VAR_47++]);
        if (VAR_13) return VAR_13;
      }
      return FUNC_3(VAR_9, VAR_10, FUNC_8(VAR_45->op), VAR_47, VAR_46, VAR_12);
    }
    break;
  case 138:
  case 132:
    {
      struct strm_lambda* VAR_48 = FUNC_6(sizeof(struct strm_lambda));

      if (!VAR_48) return VAR_4;
      VAR_48->state = FUNC_6(sizeof(strm_state));
      if (!VAR_48->state) return VAR_4;
      *VAR_48->state = *VAR_10;
      VAR_48->type = VAR_6;
      VAR_48->body = (node_lambda*)VAR_11;
      *VAR_12 = FUNC_25(VAR_48);
      return VAR_5;
    }
    break;
  case 147:
    {

      node_call* VAR_49 = (node_call*)VAR_11;
      int VAR_50;
      node_nodes* VAR_51 = (node_nodes*)VAR_49->args;
      strm_value *VAR_52;
      int VAR_53 = VAR_0;

      for (VAR_50 = 0; VAR_50 < VAR_51->len; VAR_50++) {
        if (VAR_51->data[VAR_50]->type == VAR_3) {
          VAR_53 = VAR_7;
          break;
        }
      }
      if (VAR_53) {
        strm_value VAR_54;
        VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_49->args, &VAR_54);
        VAR_52 = FUNC_12(VAR_54);
        VAR_50 = FUNC_10(VAR_54);
      }
      else {
        VAR_52 = FUNC_6(sizeof(strm_value)*VAR_51->len);
        for (VAR_50 = 0; VAR_50 < VAR_51->len; VAR_50++) {
          VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_51->data[VAR_50], &VAR_52[VAR_50]);
          if (VAR_13 == VAR_4) {
            FUNC_4(VAR_52);
            return VAR_13;
          }
        }
      }
      VAR_13 = FUNC_3(VAR_9, VAR_10, FUNC_8(VAR_49->ident), VAR_50, VAR_52, VAR_12);
      if (!VAR_53) FUNC_4(VAR_52);
      return VAR_13;
    }
    break;
  case 145:
    {
      node_fcall* VAR_55 = (node_fcall*)VAR_11;
      int VAR_56;
      strm_value VAR_57;
      node_nodes* VAR_58 = (node_nodes*)VAR_55->args;
      strm_value *VAR_59;
      int VAR_60 = VAR_0;

      if (FUNC_34(VAR_9, VAR_10, VAR_55->func, &VAR_57) == VAR_4) {
        return VAR_4;
      }
      for (VAR_56 = 0; VAR_56 < VAR_58->len; VAR_56++) {
        if (VAR_58->data[VAR_56]->type == VAR_3) {
          VAR_60 = VAR_7;
          break;
        }
      }
      if (VAR_60) {
        strm_value VAR_61;
        VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_55->args, &VAR_61);
        VAR_59 = FUNC_12(VAR_61);
        VAR_56 = FUNC_10(VAR_61);
      }
      else {
        VAR_59 = FUNC_6(sizeof(strm_value)*VAR_58->len);
        for (VAR_56 = 0; VAR_56 < VAR_58->len; VAR_56++) {
          VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_58->data[VAR_56], &VAR_59[VAR_56]);
          if (VAR_13 == VAR_4) {
            FUNC_4(VAR_59);
            return VAR_13;
          }
        }
      }
      VAR_13 = FUNC_19(VAR_9, VAR_57, VAR_56, VAR_59, VAR_12);
      if (!VAR_60) FUNC_4(VAR_59);
      return VAR_13;
    }
    break;
  case 143:
    {
      node_genfunc* VAR_62 = (node_genfunc*)VAR_11;
      struct strm_genfunc *VAR_63;

      VAR_63 = FUNC_5(VAR_10, FUNC_7(VAR_62->id));
      if (!VAR_63) return VAR_4;
      *VAR_12 = FUNC_25(VAR_63);
      return VAR_5;
    }
    break;
  case 131:
    {
      node_return* VAR_64 = (node_return*)VAR_11;
      node_nodes* VAR_65 = (node_nodes*)VAR_64->rv;
      strm_value VAR_66;

      if (!VAR_65) {
        VAR_66 = FUNC_22();
      }
      else {
        switch (VAR_65->len) {
        case 0:
          VAR_66 = FUNC_22();
          break;
        case 1:
          VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_65->data[0], &VAR_66);
          if (VAR_13) return VAR_13;
          break;
        default:
          {
            strm_array VAR_67 = FUNC_11(((void*)0), VAR_65->len);
            strm_int VAR_68;

            for (VAR_68=0; VAR_68<VAR_65->len; VAR_68++) {
              VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_65->data[VAR_68], (strm_value*)&FUNC_12(VAR_67)[VAR_68]);
              if (VAR_13) return VAR_13;
            }
            VAR_66 = FUNC_13(VAR_67);
          }
          break;
        }
      }
      FUNC_27(VAR_9, VAR_1, VAR_66);
      return VAR_4;
    }
    break;
  case 135:
    {
      int VAR_69;
      node_nodes* VAR_70 = (node_nodes*)VAR_11;
      for (VAR_69 = 0; VAR_69 < VAR_70->len; VAR_69++) {
        VAR_13 = FUNC_34(VAR_9, VAR_10, VAR_70->data[VAR_69], VAR_12);
        if (VAR_13) {
          if (VAR_9) {
            node_error* VAR_71 = VAR_9->exc;
            if (VAR_71 != ((void*)0)) {
              node* VAR_72 = VAR_70->data[VAR_69];

              VAR_71->fname = VAR_72->fname;
              VAR_71->lineno = VAR_72->lineno;
            }
          }
          return VAR_13;
        }
      }
    }
    return VAR_5;
  case 139:
    *VAR_12 = FUNC_20(((node_int*)VAR_11)->value);
    return VAR_5;
  case 144:
    *VAR_12 = FUNC_18(((node_float*)VAR_11)->value);
    return VAR_5;
  case 128:
    {
      node_time* VAR_73 = (node_time*)VAR_11;
      *VAR_12 = FUNC_29(VAR_73->sec, VAR_73->usec, VAR_73->utc_offset);
      if (FUNC_21(*VAR_12)) return VAR_4;
    }
    return VAR_5;
  case 148:
    *VAR_12 = FUNC_15(((node_bool*)VAR_11)->value);
    return VAR_5;
  case 136:
    *VAR_12 = FUNC_22();
    return VAR_5;
  case 129:
    *VAR_12 = FUNC_28(FUNC_7(((node_str*)VAR_11)->value));
    return VAR_5;
  default:
    FUNC_26(VAR_9, "unknown node");
    break;
  }
  return VAR_4;
}

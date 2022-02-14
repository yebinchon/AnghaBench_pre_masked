
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts_config {int dummy; } ;
struct text_match {scalar_t__ from_offset; scalar_t__ to_offset; scalar_t__ from_layer; scalar_t__ to_layer; struct ts_config* config; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct tcf_em_text {int pattern_len; scalar_t__ from_layer; scalar_t__ to_layer; scalar_t__ from_offset; scalar_t__ to_offset; int algo; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ts_config*) ;
 int FUNC_1 (struct ts_config*) ;
 int VAR_5 ;
 struct text_match* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ts_config*) ;
 struct ts_config* FUNC_6 (int ,int *,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_6, void *VAR_7, int VAR_8,
     struct tcf_ematch *VAR_9)
{
 struct text_match *VAR_10;
 struct tcf_em_text *VAR_11 = VAR_7;
 struct ts_config *VAR_12;
 int VAR_13 = 0;

 if (VAR_8 < sizeof(*VAR_11) || VAR_8 < (sizeof(*VAR_11) + VAR_11->pattern_len))
  return -VAR_1;

 if (VAR_11->from_layer > VAR_11->to_layer)
  return -VAR_1;

 if (VAR_11->from_layer == VAR_11->to_layer &&
     VAR_11->from_offset > VAR_11->to_offset)
  return -VAR_1;

retry:
 VAR_12 = FUNC_6(VAR_11->algo, (u8 *) VAR_11 + sizeof(*VAR_11),
         VAR_11->pattern_len, VAR_4, VAR_13);

 if (VAR_13 & VAR_5)
  FUNC_3();

 if (FUNC_0(VAR_12)) {
  if (FUNC_1(VAR_12) == -VAR_3 && !(VAR_13 & VAR_5)) {
   FUNC_4();
   VAR_13 |= VAR_5;
   goto retry;
  } else
   return FUNC_1(VAR_12);
 } else if (VAR_13 & VAR_5) {
  FUNC_5(VAR_12);
  return -VAR_0;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_12);
  return -VAR_2;
 }

 VAR_10->from_offset = VAR_11->from_offset;
 VAR_10->to_offset = VAR_11->to_offset;
 VAR_10->from_layer = VAR_11->from_layer;
 VAR_10->to_layer = VAR_11->to_layer;
 VAR_10->config = VAR_12;

 VAR_9->datalen = sizeof(*VAR_10);
 VAR_9->data = (unsigned long) VAR_10;

 return 0;
}

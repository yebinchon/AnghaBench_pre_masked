
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int cflags; scalar_t__ regex; } ;
struct TYPE_13__ {int flags; int patternlen; int pattern; } ;
struct TYPE_14__ {TYPE_1__ like_regex; } ;
struct TYPE_18__ {TYPE_2__ content; } ;
struct TYPE_15__ {int len; int val; } ;
struct TYPE_16__ {TYPE_3__ string; } ;
struct TYPE_17__ {TYPE_4__ val; } ;
typedef TYPE_5__ JsonbValue ;
typedef TYPE_6__ JsonPathItem ;
typedef int JsonPathBool ;
typedef TYPE_7__ JsonLikeRegexContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static JsonPathBool
FUNC_4(JsonPathItem *VAR_5, JsonbValue *VAR_6, JsonbValue *VAR_7,
     void *VAR_8)
{
 JsonLikeRegexContext *VAR_9 = VAR_8;

 if (!(VAR_6 = FUNC_2(VAR_6, VAR_1)))
  return VAR_4;


 if (!VAR_9->regex)
 {
  VAR_9->regex =
   FUNC_1(VAR_5->content.like_regex.pattern,
          VAR_5->content.like_regex.patternlen);
  VAR_9->cflags = FUNC_3(VAR_5->content.like_regex.flags);
 }

 if (FUNC_0(VAR_9->regex, VAR_6->val.string.val,
          VAR_6->val.string.len,
          VAR_9->cflags, VAR_0, 0, ((void*)0)))
  return VAR_3;

 return VAR_2;
}

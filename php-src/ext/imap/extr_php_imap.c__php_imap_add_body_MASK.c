
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {TYPE_4__* parameter; scalar_t__ type; } ;
struct TYPE_7__ {int lines; int bytes; } ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ encoding; struct TYPE_11__* CONTENT_MSG_BODY; scalar_t__ subtype; TYPE_3__* CONTENT_PART; TYPE_4__* parameter; TYPE_2__ disposition; TYPE_1__ size; scalar_t__ id; scalar_t__ description; } ;
struct TYPE_10__ {scalar_t__ value; scalar_t__ attribute; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_5__ body; struct TYPE_9__* next; } ;
typedef TYPE_3__ PART ;
typedef TYPE_4__ PARAMETER ;
typedef TYPE_5__ BODY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,char*) ;

void FUNC_7(zval *VAR_4, BODY *VAR_5)
{
 zval VAR_6, VAR_7, VAR_8, VAR_9;
 PARAMETER *VAR_10, *VAR_11;
 PART *VAR_12;

 if (VAR_5->type <= VAR_1) {
  FUNC_2(VAR_4, "type", VAR_5->type);
 }

 if (VAR_5->encoding <= VAR_0) {
  FUNC_2(VAR_4, "encoding", VAR_5->encoding);
 }

 if (VAR_5->subtype) {
  FUNC_2(VAR_4, "ifsubtype", 1);
  FUNC_3(VAR_4, "subtype", VAR_5->subtype);
 } else {
  FUNC_2(VAR_4, "ifsubtype", 0);
 }

 if (VAR_5->description) {
  FUNC_2(VAR_4, "ifdescription", 1);
  FUNC_3(VAR_4, "description", VAR_5->description);
 } else {
  FUNC_2(VAR_4, "ifdescription", 0);
 }

 if (VAR_5->id) {
  FUNC_2(VAR_4, "ifid", 1);
  FUNC_3(VAR_4, "id", VAR_5->id);
 } else {
  FUNC_2(VAR_4, "ifid", 0);
 }

 if (VAR_5->size.lines) {
  FUNC_2(VAR_4, "lines", VAR_5->size.lines);
 }

 if (VAR_5->size.bytes) {
  FUNC_2(VAR_4, "bytes", VAR_5->size.bytes);
 }
 if ((VAR_10 = VAR_5->parameter)) {
  FUNC_2(VAR_4, "ifparameters", 1);

  FUNC_4(&VAR_6);
  do {
   FUNC_5(&VAR_7);
   if (VAR_10->attribute) {
    FUNC_3(&VAR_7, "attribute", VAR_10->attribute);
   }
   if (VAR_10->value) {
    FUNC_3(&VAR_7, "value", VAR_10->value);
   }

   FUNC_1(&VAR_6, &VAR_7);
  } while ((VAR_10 = VAR_10->next));
 } else {
  FUNC_5(&VAR_6);
  FUNC_2(VAR_4, "ifparameters", 0);
 }
 FUNC_0(VAR_4, "parameters", &VAR_6);


 if (VAR_5->type == VAR_3) {
  FUNC_4(&VAR_6);
  for (VAR_12 = VAR_5->CONTENT_PART; VAR_12; VAR_12 = VAR_12->next) {
   FUNC_5(&VAR_7);
   FUNC_7(&VAR_7, &VAR_12->body);
   FUNC_1(&VAR_6, &VAR_7);
  }
  FUNC_0(VAR_4, "parts", &VAR_6);
 }


 if ((VAR_5->type == VAR_2) && (!FUNC_6(VAR_5->subtype, "rfc822"))) {
  VAR_5 = VAR_5->CONTENT_MSG_BODY;
  FUNC_4(&VAR_6);
  FUNC_5(&VAR_7);
  FUNC_7(&VAR_7, VAR_5);
  FUNC_1(&VAR_6, &VAR_7);
  FUNC_0(VAR_4, "parts", &VAR_6);
 }
}

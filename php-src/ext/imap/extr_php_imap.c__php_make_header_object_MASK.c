
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {char* remail; char* subject; char* in_reply_to; char* message_id; char* newsgroups; char* followup_to; char* references; scalar_t__ return_path; scalar_t__ sender; scalar_t__ reply_to; scalar_t__ bcc; scalar_t__ cc; scalar_t__ from; scalar_t__ to; scalar_t__ date; } ;
typedef TYPE_1__ ENVELOPE ;


 int * FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zval *VAR_0, ENVELOPE *VAR_1)
{
 zval VAR_2;
 zend_string *VAR_3=((void*)0);

 FUNC_5(VAR_0);

 if (VAR_1->remail) FUNC_3(VAR_0, "remail", VAR_1->remail);
 if (VAR_1->date) FUNC_3(VAR_0, "date", (char*)VAR_1->date);
 if (VAR_1->date) FUNC_3(VAR_0, "Date", (char*)VAR_1->date);
 if (VAR_1->subject) FUNC_3(VAR_0, "subject", VAR_1->subject);
 if (VAR_1->subject) FUNC_3(VAR_0, "Subject", VAR_1->subject);
 if (VAR_1->in_reply_to) FUNC_3(VAR_0, "in_reply_to", VAR_1->in_reply_to);
 if (VAR_1->message_id) FUNC_3(VAR_0, "message_id", VAR_1->message_id);
 if (VAR_1->newsgroups) FUNC_3(VAR_0, "newsgroups", VAR_1->newsgroups);
 if (VAR_1->followup_to) FUNC_3(VAR_0, "followup_to", VAR_1->followup_to);
 if (VAR_1->references) FUNC_3(VAR_0, "references", VAR_1->references);

 if (VAR_1->to) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->to, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "toaddress", VAR_3);
  }
  FUNC_1(VAR_0, "to", &VAR_2);
 }

 if (VAR_1->from) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->from, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "fromaddress", VAR_3);
  }
  FUNC_1(VAR_0, "from", &VAR_2);
 }

 if (VAR_1->cc) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->cc, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "ccaddress", VAR_3);
  }
  FUNC_1(VAR_0, "cc", &VAR_2);
 }

 if (VAR_1->bcc) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->bcc, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "bccaddress", VAR_3);
  }
  FUNC_1(VAR_0, "bcc", &VAR_2);
 }

 if (VAR_1->reply_to) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->reply_to, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "reply_toaddress", VAR_3);
  }
  FUNC_1(VAR_0, "reply_to", &VAR_2);
 }

 if (VAR_1->sender) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->sender, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "senderaddress", VAR_3);
  }
  FUNC_1(VAR_0, "sender", &VAR_2);
 }

 if (VAR_1->return_path) {
  FUNC_4(&VAR_2);
  VAR_3 = FUNC_0(VAR_1->return_path, &VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "return_pathaddress", VAR_3);
  }
  FUNC_1(VAR_0, "return_path", &VAR_2);
 }
}

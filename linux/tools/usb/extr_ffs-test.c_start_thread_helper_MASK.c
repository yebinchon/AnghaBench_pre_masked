
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {char* filename; char* in_name; char* out_name; scalar_t__ (* in ) (struct thread*,int ,int ) ;scalar_t__ (* out ) (struct thread*,int ,scalar_t__) ;scalar_t__ status; int buf; int buf_size; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct thread*,int ,int ) ;
 scalar_t__ FUNC_6 (struct thread*,int ,scalar_t__) ;
 int FUNC_7 (char*,char const*,char const*) ;

__attribute__((used)) static void *FUNC_8(void *VAR_4)
{
 const char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 struct thread *VAR_9 = VAR_4;
 ssize_t VAR_10;

 FUNC_1("%s: starts\n", VAR_9->filename);
 VAR_7 = VAR_9->in_name ? VAR_9->in_name : VAR_9->filename;
 VAR_8 = VAR_9->out_name ? VAR_9->out_name : VAR_9->filename;

 FUNC_3(VAR_2, VAR_4);

 for (;;) {
  FUNC_4();

  VAR_10 = VAR_9->in(VAR_9, VAR_9->buf, VAR_9->buf_size);
  if (VAR_10 > 0) {
   VAR_10 = VAR_9->out(VAR_9, VAR_9->buf, VAR_10);
   VAR_5 = VAR_8;
   VAR_6 = "write";
  } else {
   VAR_5 = VAR_7;
   VAR_6 = "read";
  }

  if (VAR_10 > 0) {

  } else if (!VAR_10) {
   FUNC_0("%s: %s: EOF", VAR_5, VAR_6);
   break;
  } else if (VAR_3 == VAR_1 || VAR_3 == VAR_0) {
   FUNC_0("%s: %s", VAR_5, VAR_6);
  } else {
   FUNC_7("%s: %s", VAR_5, VAR_6);
   break;
  }
 }

 FUNC_2(1);

 VAR_9->status = VAR_10;
 FUNC_1("%s: ends\n", VAR_9->filename);
 return ((void*)0);
}

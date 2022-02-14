
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct remote_message_header {int destination; int source; scalar_t__ session; } ;
struct harbor {int ctx; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,struct remote_message_header*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,int,int,int,int,void*,int) ;

__attribute__((used)) static void
FUNC_3(struct harbor *VAR_5, void *VAR_6, int VAR_7) {
 const char * VAR_8 = VAR_6;
 VAR_8 += VAR_7 - VAR_2;
 struct remote_message_header VAR_9;
 FUNC_0((const uint32_t *)VAR_8, &VAR_9);

 uint32_t VAR_10 = VAR_9.destination;
 int VAR_11 = VAR_10 >> VAR_1;
 VAR_10 = (VAR_10 & VAR_0) | ((uint32_t)VAR_5->id << VAR_1);

 if (FUNC_2(VAR_5->ctx, VAR_9.source, VAR_10, VAR_11 | VAR_4 , (int)VAR_9.session, (void *)VAR_6, VAR_7-VAR_2) < 0) {
  if (VAR_11 != VAR_3) {

   FUNC_2(VAR_5->ctx, VAR_10, VAR_9.source , VAR_3, (int)VAR_9.session, ((void*)0), 0);
  }
  FUNC_1(VAR_5->ctx, "Unknown destination :%x from :%x type(%d)", VAR_10, VAR_9.source, VAR_11);
 }
}

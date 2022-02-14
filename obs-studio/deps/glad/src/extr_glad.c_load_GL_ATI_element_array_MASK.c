
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLELEMENTPOINTERATIPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTARRAYATIPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTARRAYATIPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_4) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLELEMENTPOINTERATIPROC)VAR_4("glElementPointerATI");
 VAR_1 = (PFNGLDRAWELEMENTARRAYATIPROC)VAR_4("glDrawElementArrayATI");
 VAR_2 = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)VAR_4("glDrawRangeElementArrayATI");
}

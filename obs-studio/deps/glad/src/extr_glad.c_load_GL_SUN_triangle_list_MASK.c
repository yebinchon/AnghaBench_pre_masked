
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLREPLACEMENTCODEUSVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUSSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUIVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUISUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUBVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUBSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEPOINTERSUNPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_8) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLREPLACEMENTCODEUISUNPROC)VAR_8("glReplacementCodeuiSUN");
 VAR_6 = (PFNGLREPLACEMENTCODEUSSUNPROC)VAR_8("glReplacementCodeusSUN");
 VAR_2 = (PFNGLREPLACEMENTCODEUBSUNPROC)VAR_8("glReplacementCodeubSUN");
 VAR_5 = (PFNGLREPLACEMENTCODEUIVSUNPROC)VAR_8("glReplacementCodeuivSUN");
 VAR_7 = (PFNGLREPLACEMENTCODEUSVSUNPROC)VAR_8("glReplacementCodeusvSUN");
 VAR_3 = (PFNGLREPLACEMENTCODEUBVSUNPROC)VAR_8("glReplacementCodeubvSUN");
 VAR_1 = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)VAR_8("glReplacementCodePointerSUN");
}

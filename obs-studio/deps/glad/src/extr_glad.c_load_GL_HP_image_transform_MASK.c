
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERIVHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERIHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERFVHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERFHPPROC ;
typedef scalar_t__ PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC ;
typedef scalar_t__ PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_7) {
 if(!VAR_0) return;
 VAR_5 = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)VAR_7("glImageTransformParameteriHP");
 VAR_3 = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)VAR_7("glImageTransformParameterfHP");
 VAR_6 = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)VAR_7("glImageTransformParameterivHP");
 VAR_4 = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)VAR_7("glImageTransformParameterfvHP");
 VAR_2 = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)VAR_7("glGetImageTransformParameterivHP");
 VAR_1 = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)VAR_7("glGetImageTransformParameterfvHP");
}

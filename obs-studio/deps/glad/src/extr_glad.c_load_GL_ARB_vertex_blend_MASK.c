
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWEIGHTUSVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTUIVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTUBVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTSVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTPOINTERARBPROC ;
typedef scalar_t__ PFNGLWEIGHTIVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTFVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTDVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTBVARBPROC ;
typedef scalar_t__ PFNGLVERTEXBLENDARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_11) {
 if(!VAR_0) return;
 VAR_3 = (PFNGLWEIGHTBVARBPROC)VAR_11("glWeightbvARB");
 VAR_7 = (PFNGLWEIGHTSVARBPROC)VAR_11("glWeightsvARB");
 VAR_6 = (PFNGLWEIGHTIVARBPROC)VAR_11("glWeightivARB");
 VAR_5 = (PFNGLWEIGHTFVARBPROC)VAR_11("glWeightfvARB");
 VAR_4 = (PFNGLWEIGHTDVARBPROC)VAR_11("glWeightdvARB");
 VAR_8 = (PFNGLWEIGHTUBVARBPROC)VAR_11("glWeightubvARB");
 VAR_10 = (PFNGLWEIGHTUSVARBPROC)VAR_11("glWeightusvARB");
 VAR_9 = (PFNGLWEIGHTUIVARBPROC)VAR_11("glWeightuivARB");
 VAR_2 = (PFNGLWEIGHTPOINTERARBPROC)VAR_11("glWeightPointerARB");
 VAR_1 = (PFNGLVERTEXBLENDARBPROC)VAR_11("glVertexBlendARB");
}

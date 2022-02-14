
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLFOGCOORDPOINTEREXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDFVEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDFEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDDVEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDDEXTPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_6) {
 if(!VAR_0) return;
 VAR_4 = (PFNGLFOGCOORDFEXTPROC)VAR_6("glFogCoordfEXT");
 VAR_5 = (PFNGLFOGCOORDFVEXTPROC)VAR_6("glFogCoordfvEXT");
 VAR_2 = (PFNGLFOGCOORDDEXTPROC)VAR_6("glFogCoorddEXT");
 VAR_3 = (PFNGLFOGCOORDDVEXTPROC)VAR_6("glFogCoorddvEXT");
 VAR_1 = (PFNGLFOGCOORDPOINTEREXTPROC)VAR_6("glFogCoordPointerEXT");
}

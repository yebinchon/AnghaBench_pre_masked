
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t PicMidrangeOpcode ;
typedef int PicMidrangeOpInfo ;


 size_t VAR_0 ;
 int const* VAR_1 ;

const PicMidrangeOpInfo *FUNC_0 (PicMidrangeOpcode VAR_2) {
 if (VAR_2 >= VAR_0) {
  return ((void*)0);
 }
 return &VAR_1[VAR_2];
}

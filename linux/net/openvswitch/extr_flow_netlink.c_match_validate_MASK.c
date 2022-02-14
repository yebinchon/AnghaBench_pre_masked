
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct sw_flow_match {TYPE_9__* mask; TYPE_8__* key; } ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_11__ {scalar_t__ src; } ;
struct TYPE_14__ {int proto; } ;
struct TYPE_15__ {TYPE_4__ eth; TYPE_2__ tp; TYPE_5__ ip; } ;
struct TYPE_18__ {TYPE_6__ key; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_10__ {scalar_t__ src; } ;
struct TYPE_16__ {scalar_t__ frag; scalar_t__ proto; } ;
struct TYPE_17__ {TYPE_3__ eth; TYPE_1__ tp; TYPE_7__ ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(const struct sw_flow_match *VAR_30,
      u64 VAR_31, u64 VAR_32, bool VAR_33)
{
 u64 VAR_34 = 0;
 u64 VAR_35 = VAR_31;



 VAR_35 &= ~((1 << VAR_20)
   | (1 << VAR_14)
   | (1 << VAR_21)
   | (1 << VAR_15)
   | (1 << VAR_26)
   | (1 << VAR_27)
   | (1 << VAR_29)
   | (1 << VAR_25)
   | (1 << VAR_17)
   | (1 << VAR_18)
   | (1 << VAR_13)
   | (1 << VAR_23)
   | (1 << VAR_22)
   | (1 << VAR_24));


 VAR_35 |= ((1 << VAR_28)
         | (1 << VAR_19)
         | (1 << VAR_16));


 if (VAR_30->key->eth.type == FUNC_2(VAR_0)
   || VAR_30->key->eth.type == FUNC_2(VAR_4)) {
  VAR_34 |= 1 << VAR_13;
  if (VAR_30->mask && (VAR_30->mask->key.eth.type == FUNC_2(0xffff)))
   VAR_35 |= 1 << VAR_13;
 }

 if (FUNC_1(VAR_30->key->eth.type)) {
  VAR_34 |= 1 << VAR_22;
  if (VAR_30->mask && (VAR_30->mask->key.eth.type == FUNC_2(0xffff)))
   VAR_35 |= 1 << VAR_22;
 }

 if (VAR_30->key->eth.type == FUNC_2(VAR_1)) {
  VAR_34 |= 1 << VAR_20;
  if (VAR_30->mask && VAR_30->mask->key.eth.type == FUNC_2(0xffff)) {
   VAR_35 |= 1 << VAR_20;
   VAR_35 |= 1 << VAR_14;
  }

  if (VAR_30->key->ip.frag != VAR_12) {
   if (VAR_30->key->ip.proto == VAR_9) {
    VAR_34 |= 1 << VAR_29;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_29;
   }

   if (VAR_30->key->ip.proto == VAR_7) {
    VAR_34 |= 1 << VAR_25;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_25;
   }

   if (VAR_30->key->ip.proto == VAR_8) {
    VAR_34 |= 1 << VAR_26;
    VAR_34 |= 1 << VAR_27;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff)) {
     VAR_35 |= 1 << VAR_26;
     VAR_35 |= 1 << VAR_27;
    }
   }

   if (VAR_30->key->ip.proto == VAR_5) {
    VAR_34 |= 1 << VAR_17;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_17;
   }
  }
 }

 if (VAR_30->key->eth.type == FUNC_2(VAR_2)) {
  VAR_34 |= 1 << VAR_21;
  if (VAR_30->mask && VAR_30->mask->key.eth.type == FUNC_2(0xffff)) {
   VAR_35 |= 1 << VAR_21;
   VAR_35 |= 1 << VAR_15;
  }

  if (VAR_30->key->ip.frag != VAR_12) {
   if (VAR_30->key->ip.proto == VAR_9) {
    VAR_34 |= 1 << VAR_29;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_29;
   }

   if (VAR_30->key->ip.proto == VAR_7) {
    VAR_34 |= 1 << VAR_25;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_25;
   }

   if (VAR_30->key->ip.proto == VAR_8) {
    VAR_34 |= 1 << VAR_26;
    VAR_34 |= 1 << VAR_27;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff)) {
     VAR_35 |= 1 << VAR_26;
     VAR_35 |= 1 << VAR_27;
    }
   }

   if (VAR_30->key->ip.proto == VAR_6) {
    VAR_34 |= 1 << VAR_18;
    if (VAR_30->mask && (VAR_30->mask->key.ip.proto == 0xff))
     VAR_35 |= 1 << VAR_18;

    if (VAR_30->key->tp.src ==
      FUNC_2(VAR_11) ||
        VAR_30->key->tp.src == FUNC_2(VAR_10)) {
     VAR_34 |= 1 << VAR_23;





     VAR_35 &= ~(1ULL << VAR_15);
     if (VAR_30->mask && (VAR_30->mask->key.tp.src == FUNC_2(0xff)))
      VAR_35 |= 1 << VAR_23;
    }
   }
  }
 }

 if (VAR_30->key->eth.type == FUNC_2(VAR_3)) {
  VAR_34 |= 1 << VAR_24;
  if (VAR_30->mask &&
      VAR_30->mask->key.eth.type == FUNC_2(0xffff)) {
   VAR_35 |= 1 << VAR_24;
  }
 }

 if ((VAR_31 & VAR_34) != VAR_34) {

  FUNC_0(VAR_33, "Missing key (keys=%llx, expected=%llx)",
     (unsigned long long)VAR_31,
     (unsigned long long)VAR_34);
  return 0;
 }

 if ((VAR_32 & VAR_35) != VAR_32) {

  FUNC_0(VAR_33, "Unexpected mask (mask=%llx, allowed=%llx)",
     (unsigned long long)VAR_32,
     (unsigned long long)VAR_35);
  return 0;
 }

 return 1;
}

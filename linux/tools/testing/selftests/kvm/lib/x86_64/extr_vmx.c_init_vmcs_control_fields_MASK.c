
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmx_pages {int eptp_gpa; int msr_gpa; int vmread_gpa; int vmwrite_gpa; } ;
struct eptPageTablePointer {int page_walk_length; int ad_enabled; int address; int memory_type; } ;
typedef int ept_paddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int*,struct eptPageTablePointer*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static inline void FUNC_6(struct vmx_pages *VAR_36)
{
 uint32_t VAR_37 = 0;

 FUNC_5(VAR_23, 0);
 FUNC_5(VAR_19, 0);

 FUNC_5(VAR_18, FUNC_4(VAR_13));

 if (VAR_36->eptp_gpa) {
  uint64_t VAR_38;
  struct eptPageTablePointer VAR_39 = {
   .memory_type = VAR_26,
   .page_walk_length = 3,
   .ad_enabled = !!(FUNC_4(VAR_11) & VAR_27),
   .address = VAR_36->eptp_gpa >> VAR_17,
  };

  FUNC_3(&VAR_38, &VAR_39, sizeof(VAR_38));
  FUNC_5(VAR_7, VAR_38);
  VAR_37 |= VAR_20;
 }

 if (!FUNC_5(VAR_21, VAR_37))
  FUNC_5(VAR_1,
   FUNC_4(VAR_14) | VAR_0);
 else {
  FUNC_5(VAR_1, FUNC_4(VAR_14));
  FUNC_0(!VAR_37);
 }

 FUNC_5(VAR_8, 0);
 FUNC_5(VAR_15, 0);
 FUNC_5(VAR_16, -1);
 FUNC_5(VAR_4, 0);
 FUNC_5(VAR_32, FUNC_4(VAR_12) |
  VAR_33);
 FUNC_5(VAR_35, 0);
 FUNC_5(VAR_34, 0);
 FUNC_5(VAR_28, FUNC_4(VAR_10) |
  VAR_29);
 FUNC_5(VAR_31, 0);
 FUNC_5(VAR_30, 0);
 FUNC_5(VAR_22, 0);

 FUNC_5(VAR_2, 0);
 FUNC_5(VAR_5, 0);
 FUNC_5(VAR_3, FUNC_1());
 FUNC_5(VAR_6, FUNC_2());

 FUNC_5(VAR_9, VAR_36->msr_gpa);
 FUNC_5(VAR_24, VAR_36->vmread_gpa);
 FUNC_5(VAR_25, VAR_36->vmwrite_gpa);
}

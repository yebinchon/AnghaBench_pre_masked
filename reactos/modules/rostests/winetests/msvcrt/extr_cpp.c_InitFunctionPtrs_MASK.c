
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (scalar_t__*,char*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 scalar_t__* VAR_19 ;
 scalar_t__* VAR_20 ;
 scalar_t__* VAR_21 ;
 scalar_t__* VAR_22 ;
 scalar_t__* VAR_23 ;
 scalar_t__* VAR_24 ;
 scalar_t__* VAR_25 ;
 scalar_t__* VAR_26 ;
 scalar_t__* VAR_27 ;
 scalar_t__* VAR_28 ;
 scalar_t__* VAR_29 ;
 scalar_t__* VAR_30 ;
 scalar_t__* VAR_31 ;
 scalar_t__* VAR_32 ;
 scalar_t__* VAR_33 ;
 scalar_t__* VAR_34 ;
 scalar_t__* VAR_35 ;
 scalar_t__* VAR_36 ;
 scalar_t__* VAR_37 ;
 scalar_t__* VAR_38 ;
 scalar_t__* VAR_39 ;
 scalar_t__* VAR_40 ;
 scalar_t__* VAR_41 ;
 scalar_t__* VAR_42 ;
 scalar_t__* VAR_43 ;
 scalar_t__* VAR_44 ;
 scalar_t__* VAR_45 ;
 scalar_t__* VAR_46 ;
 scalar_t__* VAR_47 ;
 scalar_t__* VAR_48 ;
 scalar_t__* VAR_49 ;
 scalar_t__* VAR_50 ;
 scalar_t__* VAR_51 ;
 scalar_t__* VAR_52 ;
 scalar_t__* VAR_53 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    VAR_3 = FUNC_0("msvcrt.dll");
    if (!VAR_3)
        VAR_3 = FUNC_0("msvcrtd.dll");
    FUNC_4(VAR_3 != 0, "GetModuleHandleA failed\n");
    if (!VAR_3)
    {
        FUNC_5("Could not load msvcrt.dll\n");
        return VAR_0;
    }

    FUNC_1(VAR_45, "malloc");
    FUNC_1(VAR_44, "free");

    FUNC_1(VAR_42, "??_7exception@@6B@");
    FUNC_1(VAR_33, "??_7bad_typeid@@6B@");
    FUNC_1(VAR_24, "??_7bad_cast@@6B@");
    FUNC_1(VAR_13, "??_7__non_rtti_object@@6B@");

    FUNC_1(VAR_6, "__RTtypeid");
    FUNC_1(VAR_4, "__RTCastToVoid");
    FUNC_1(VAR_5, "__RTDynamicCast");

    FUNC_1(VAR_15,"__unDName");


    FUNC_2(VAR_2, "??0logic_error@@QAE@ABQBD@Z");
    if (sizeof(void *) > sizeof(int))
    {
        FUNC_2(VAR_47, "??_U@YAPEAX_K@Z");
        FUNC_2(VAR_46, "??_V@YAXPEAX@Z");

        FUNC_1(VAR_36, "??0exception@@QEAA@AEBQEBD@Z");
        FUNC_1(VAR_35, "??0exception@@QEAA@AEBV0@@Z");
        FUNC_1(VAR_37, "??0exception@@QEAA@XZ");
        FUNC_1(VAR_38, "??1exception@@UEAA@XZ");
        FUNC_1(VAR_39, "??4exception@@QEAAAEAV0@AEBV0@@Z");
        FUNC_1(VAR_43, "?what@exception@@UEBAPEBDXZ");
        VAR_41 = (void*)VAR_42[0];
        VAR_40 = (void*)VAR_42[0];

        FUNC_1(VAR_27, "??0bad_typeid@@QEAA@PEBD@Z");
        FUNC_2(VAR_28, "??_Fbad_typeid@@QEAAXXZ");
        FUNC_1(VAR_26, "??0bad_typeid@@QEAA@AEBV0@@Z");
        FUNC_1(VAR_29, "??1bad_typeid@@UEAA@XZ");
        FUNC_1(VAR_30, "??4bad_typeid@@QEAAAEAV0@AEBV0@@Z");
        FUNC_1(VAR_34, "?what@exception@@UEBAPEBDXZ");
        VAR_32 = (void*)VAR_33[0];
        VAR_31 = (void*)VAR_33[0];

        FUNC_1(VAR_17, "??0bad_cast@@QEAA@AEBQEBD@Z");
        FUNC_1(VAR_18, "??0bad_cast@@QEAA@PEBD@Z");
        FUNC_1(VAR_19, "??_Fbad_cast@@QEAAXXZ");
        FUNC_1(VAR_16, "??0bad_cast@@QEAA@AEBV0@@Z");
        FUNC_1(VAR_20, "??1bad_cast@@UEAA@XZ");
        FUNC_1(VAR_21, "??4bad_cast@@QEAAAEAV0@AEBV0@@Z");
        FUNC_1(VAR_25, "?what@exception@@UEBAPEBDXZ");
        VAR_23 = (void*)VAR_24[0];
        VAR_22 = (void*)VAR_24[0];

        FUNC_1(VAR_8, "??0__non_rtti_object@@QEAA@PEBD@Z");
        FUNC_1(VAR_7, "??0__non_rtti_object@@QEAA@AEBV0@@Z");
        FUNC_1(VAR_9, "??1__non_rtti_object@@UEAA@XZ");
        FUNC_1(VAR_10, "??4__non_rtti_object@@QEAAAEAV0@AEBV0@@Z");
        FUNC_1(VAR_14, "?what@exception@@UEBAPEBDXZ");
        VAR_12 = (void*)VAR_13[0];
        VAR_11 = (void*)VAR_13[0];

        FUNC_1(VAR_49, "??1type_info@@UEAA@XZ");
        FUNC_1(VAR_53, "?raw_name@type_info@@QEBAPEBDXZ");
        FUNC_1(VAR_50, "?name@type_info@@QEBAPEBDXZ");
        FUNC_1(VAR_48, "?before@type_info@@QEBAHAEBV1@@Z");
        FUNC_1(VAR_51, "??8type_info@@QEBAHAEBV0@@Z");
        FUNC_1(VAR_52, "??9type_info@@QEBAHAEBV0@@Z");
    }
    else
    {
        FUNC_2(VAR_47, "??_U@YAPAXI@Z");
        FUNC_2(VAR_46, "??_V@YAXPAX@Z");

        FUNC_1(VAR_36, "??0exception@@QAE@ABQBD@Z");
        FUNC_1(VAR_35, "??0exception@@QAE@ABV0@@Z");
        FUNC_1(VAR_37, "??0exception@@QAE@XZ");
        FUNC_1(VAR_38, "??1exception@@UAE@XZ");
        FUNC_1(VAR_39, "??4exception@@QAEAAV0@ABV0@@Z");
        FUNC_1(VAR_43, "?what@exception@@UBEPBDXZ");
        FUNC_1(VAR_41, "??_Eexception@@UAEPAXI@Z");
        FUNC_1(VAR_40, "??_Gexception@@UAEPAXI@Z");

        FUNC_1(VAR_27, "??0bad_typeid@@QAE@PBD@Z");
        FUNC_2(VAR_28, "??_Fbad_typeid@@QAEXXZ");
        FUNC_1(VAR_26, "??0bad_typeid@@QAE@ABV0@@Z");
        FUNC_1(VAR_29, "??1bad_typeid@@UAE@XZ");
        FUNC_1(VAR_30, "??4bad_typeid@@QAEAAV0@ABV0@@Z");
        FUNC_1(VAR_34, "?what@exception@@UBEPBDXZ");
        FUNC_1(VAR_32, "??_Ebad_typeid@@UAEPAXI@Z");
        FUNC_1(VAR_31, "??_Gbad_typeid@@UAEPAXI@Z");

        FUNC_2(VAR_17, "??0bad_cast@@QAE@ABQBD@Z");
        if (!VAR_17)
            FUNC_1(VAR_17, "??0bad_cast@@AAE@PBQBD@Z");
        FUNC_2(VAR_18, "??0bad_cast@@QAE@PBD@Z");
        FUNC_2(VAR_19, "??_Fbad_cast@@QAEXXZ");
        FUNC_1(VAR_16, "??0bad_cast@@QAE@ABV0@@Z");
        FUNC_1(VAR_20, "??1bad_cast@@UAE@XZ");
        FUNC_1(VAR_21, "??4bad_cast@@QAEAAV0@ABV0@@Z");
        FUNC_1(VAR_25, "?what@exception@@UBEPBDXZ");
        FUNC_1(VAR_23, "??_Ebad_cast@@UAEPAXI@Z");
        FUNC_1(VAR_22, "??_Gbad_cast@@UAEPAXI@Z");

        FUNC_1(VAR_8, "??0__non_rtti_object@@QAE@PBD@Z");
        FUNC_1(VAR_7, "??0__non_rtti_object@@QAE@ABV0@@Z");
        FUNC_1(VAR_9, "??1__non_rtti_object@@UAE@XZ");
        FUNC_1(VAR_10, "??4__non_rtti_object@@QAEAAV0@ABV0@@Z");
        FUNC_1(VAR_14, "?what@exception@@UBEPBDXZ");
        FUNC_1(VAR_12, "??_E__non_rtti_object@@UAEPAXI@Z");
        FUNC_1(VAR_11, "??_G__non_rtti_object@@UAEPAXI@Z");

        FUNC_1(VAR_49, "??1type_info@@UAE@XZ");
        FUNC_1(VAR_53, "?raw_name@type_info@@QBEPBDXZ");
        FUNC_1(VAR_50, "?name@type_info@@QBEPBDXZ");
        FUNC_1(VAR_48, "?before@type_info@@QBEHABV1@@Z");
        FUNC_1(VAR_51, "??8type_info@@QBEHABV0@@Z");
        FUNC_1(VAR_52, "??9type_info@@QBEHABV0@@Z");

    }

    if (!VAR_47)
        VAR_47 = VAR_45;
    if (!VAR_46)
        VAR_46 = VAR_44;

    FUNC_3();
    return VAR_1;
}

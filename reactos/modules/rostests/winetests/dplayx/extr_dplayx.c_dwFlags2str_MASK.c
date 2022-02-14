
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef char* LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static LPCSTR FUNC_4(DWORD VAR_101, DWORD VAR_102)
{
    LPSTR VAR_103 = FUNC_0();



    if (VAR_102 & (1<<0))
    {
        if (VAR_101 & VAR_12)
            FUNC_1(VAR_103, "DPCONNECTION_DIRECTPLAY,");
        if (VAR_101 & VAR_13)
            FUNC_1(VAR_103, "DPCONNECTION_DIRECTPLAYLOBBY,");
    }




    if (VAR_102 & (1<<1))
    {
        if (VAR_101 == VAR_19)
            FUNC_1(VAR_103, "DPENUMPLAYERS_ALL,");
        if (VAR_101 & VAR_21)
            FUNC_1(VAR_103, "DPENUMPLAYERS_LOCAL,");
        if (VAR_101 & VAR_23)
            FUNC_1(VAR_103, "DPENUMPLAYERS_REMOTE,");
        if (VAR_101 & VAR_20)
            FUNC_1(VAR_103, "DPENUMPLAYERS_GROUP,");
        if (VAR_101 & VAR_25)
            FUNC_1(VAR_103, "DPENUMPLAYERS_SESSION,");
        if (VAR_101 & VAR_24)
            FUNC_1(VAR_103, "DPENUMPLAYERS_SERVERPLAYER,");
        if (VAR_101 & VAR_26)
            FUNC_1(VAR_103, "DPENUMPLAYERS_SPECTATOR,");
        if (VAR_101 & VAR_22)
            FUNC_1(VAR_103, "DPENUMPLAYERS_OWNER,");
    }
    if (VAR_102 & (1<<2))
    {
        if (VAR_101 == VAR_15)
            FUNC_1(VAR_103, "DPENUMGROUPS_ALL,");
        if (VAR_101 & VAR_21)
            FUNC_1(VAR_103, "DPENUMGROUPS_LOCAL,");
        if (VAR_101 & VAR_23)
            FUNC_1(VAR_103, "DPENUMGROUPS_REMOTE,");
        if (VAR_101 & VAR_20)
            FUNC_1(VAR_103, "DPENUMGROUPS_GROUP,");
        if (VAR_101 & VAR_25)
            FUNC_1(VAR_103, "DPENUMGROUPS_SESSION,");
        if (VAR_101 & VAR_17)
            FUNC_1(VAR_103, "DPENUMGROUPS_SHORTCUT,");
        if (VAR_101 & VAR_18)
            FUNC_1(VAR_103, "DPENUMGROUPS_STAGINGAREA,");
        if (VAR_101 & VAR_16)
            FUNC_1(VAR_103, "DPENUMGROUPS_HIDDEN,");
    }



    if (VAR_102 & (1<<3))
    {
        if (VAR_101 & VAR_50)
            FUNC_1(VAR_103, "DPPLAYER_SERVERPLAYER,");
        if (VAR_101 & VAR_51)
            FUNC_1(VAR_103, "DPPLAYER_SPECTATOR,");
        if (VAR_101 & VAR_48)
            FUNC_1(VAR_103, "DPPLAYER_LOCAL,");
        if (VAR_101 & VAR_49)
            FUNC_1(VAR_103, "DPPLAYER_OWNER,");
    }



    if (VAR_102 & (1<<4))
    {
        if (VAR_101 & VAR_39)
            FUNC_1(VAR_103, "DPGROUP_STAGINGAREA,");
        if (VAR_101 & VAR_38)
            FUNC_1(VAR_103, "DPGROUP_LOCAL,");
        if (VAR_101 & VAR_37)
            FUNC_1(VAR_103, "DPGROUP_HIDDEN,");
    }



    if (VAR_102 & (1<<5))
    {
        if (VAR_101 & VAR_29)
            FUNC_1(VAR_103, "DPENUMSESSIONS_AVAILABLE,");
        if (VAR_101 & VAR_27)
            FUNC_1(VAR_103, "DPENUMSESSIONS_ALL,");
        if (VAR_101 & VAR_28)
            FUNC_1(VAR_103, "DPENUMSESSIONS_ASYNC,");
        if (VAR_101 & VAR_32)
            FUNC_1(VAR_103, "DPENUMSESSIONS_STOPASYNC,");
        if (VAR_101 & VAR_30)
            FUNC_1(VAR_103, "DPENUMSESSIONS_PASSWORDREQUIRED,");
        if (VAR_101 & VAR_31)
            FUNC_1(VAR_103, "DPENUMSESSIONS_RETURNSTATUS,");
    }




    if (VAR_102 & (1<<6))
    {
        if (VAR_101 & VAR_34)
            FUNC_1(VAR_103, "DPGETCAPS_GUARANTEED,");
    }




    if (VAR_102 & (1<<7))
    {
        if (VAR_101 == VAR_36)
            FUNC_1(VAR_103, "DPGET_REMOTE,");
        if (VAR_101 & VAR_35)
            FUNC_1(VAR_103, "DPGET_LOCAL,");
    }



    if (VAR_102 & (1<<8))
    {
        if (VAR_101 & VAR_52)
            FUNC_1(VAR_103, "DPRECEIVE_ALL,");
        if (VAR_101 & VAR_55)
            FUNC_1(VAR_103, "DPRECEIVE_TOPLAYER,");
        if (VAR_101 & VAR_53)
            FUNC_1(VAR_103, "DPRECEIVE_FROMPLAYER,");
        if (VAR_101 & VAR_54)
            FUNC_1(VAR_103, "DPRECEIVE_PEEK,");
    }



    if (VAR_102 & (1<<9))
    {


        if (VAR_101 == VAR_62)
        {
            FUNC_1(VAR_103, "DPSEND_MAX_PRIORITY,");
        }
        else
        {
            if (VAR_101 & VAR_59)
                FUNC_1(VAR_103, "DPSEND_GUARANTEED,");
            if (VAR_101 & VAR_60)
                FUNC_1(VAR_103, "DPSEND_HIGHPRIORITY,");
            if (VAR_101 & VAR_64)
                FUNC_1(VAR_103, "DPSEND_OPENSTREAM,");
            if (VAR_101 & VAR_57)
                FUNC_1(VAR_103, "DPSEND_CLOSESTREAM,");
            if (VAR_101 & VAR_65)
                FUNC_1(VAR_103, "DPSEND_SIGNED,");
            if (VAR_101 & VAR_58)
                FUNC_1(VAR_103, "DPSEND_ENCRYPTED,");
            if (VAR_101 & VAR_61)
                FUNC_1(VAR_103, "DPSEND_LOBBYSYSTEMMESSAGE,");
            if (VAR_101 & VAR_56)
                FUNC_1(VAR_103, "DPSEND_ASYNC,");
            if (VAR_101 & VAR_63)
                FUNC_1(VAR_103, "DPSEND_NOSENDCOMPLETEMSG,");
        }
    }







    if (VAR_102 & (1<<10))
    {
        if (VAR_101 == VAR_82)
            FUNC_1(VAR_103, "DPSET_REMOTE,");
        if (VAR_101 & VAR_81)
            FUNC_1(VAR_103, "DPSET_LOCAL,");
        if (VAR_101 & VAR_80)
            FUNC_1(VAR_103, "DPSET_GUARANTEED,");
    }



    if (VAR_102 & (1<<11))
    {
        if (VAR_101 & VAR_43)
            FUNC_1(VAR_103, "DPMESSAGEQUEUE_SEND,");
        if (VAR_101 & VAR_42)
            FUNC_1(VAR_103, "DPMESSAGEQUEUE_RECEIVE,");
    }



    if (VAR_102 & (1<<12))
    {
        if (VAR_101 & VAR_14)
            FUNC_1(VAR_103, "DPCONNECT_RETURNSTATUS,");
    }



    if (VAR_102 & (1<<13))
    {
        if (VAR_101 & VAR_45)
            FUNC_1(VAR_103, "DPOPEN_JOIN,");
        if (VAR_101 & VAR_44)
            FUNC_1(VAR_103, "DPOPEN_CREATE,");
        if (VAR_101 & VAR_46)
            FUNC_1(VAR_103, "DPOPEN_RETURNSTATUS,");
    }



    if (VAR_102 & (1<<14))
    {
        if (VAR_101 & VAR_72)
            FUNC_1(VAR_103, "DPSESSION_NEWPLAYERSDISABLED,");
        if (VAR_101 & VAR_70)
            FUNC_1(VAR_103, "DPSESSION_MIGRATEHOST,");
        if (VAR_101 & VAR_74)
            FUNC_1(VAR_103, "DPSESSION_NOMESSAGEID,");
        if (VAR_101 & VAR_68)
            FUNC_1(VAR_103, "DPSESSION_JOINDISABLED,");
        if (VAR_101 & VAR_69)
            FUNC_1(VAR_103, "DPSESSION_KEEPALIVE,");
        if (VAR_101 & VAR_73)
            FUNC_1(VAR_103, "DPSESSION_NODATAMESSAGES,");
        if (VAR_101 & VAR_79)
            FUNC_1(VAR_103, "DPSESSION_SECURESERVER,");
        if (VAR_101 & VAR_78)
            FUNC_1(VAR_103, "DPSESSION_PRIVATE,");
        if (VAR_101 & VAR_77)
            FUNC_1(VAR_103, "DPSESSION_PASSWORDREQUIRED,");
        if (VAR_101 & VAR_71)
            FUNC_1(VAR_103, "DPSESSION_MULTICASTSERVER,");
        if (VAR_101 & VAR_66)
            FUNC_1(VAR_103, "DPSESSION_CLIENTSERVER,");

        if (VAR_101 & VAR_67)
            FUNC_1(VAR_103, "DPSESSION_DIRECTPLAYPROTOCOL,");
        if (VAR_101 & VAR_75)
            FUNC_1(VAR_103, "DPSESSION_NOPRESERVEORDER,");
        if (VAR_101 & VAR_76)
            FUNC_1(VAR_103, "DPSESSION_OPTIMIZELATENCY,");

    }



    if (VAR_102 & (1<<15))
    {
        if (VAR_101 & VAR_40)
            FUNC_1(VAR_103, "DPLCONNECTION_CREATESESSION,");
        if (VAR_101 & VAR_41)
            FUNC_1(VAR_103, "DPLCONNECTION_JOINSESSION,");
    }



    if (VAR_102 & (1<<16))
    {
        if (VAR_101 & VAR_33)
            FUNC_1(VAR_103, "DPESC_TIMEDOUT,");
    }




    if (VAR_102 & (1<<17))
    {
        if (VAR_101 & VAR_7)
            FUNC_1(VAR_103, "DPCAPS_ISHOST,");
        if (VAR_101 & VAR_4)
            FUNC_1(VAR_103, "DPCAPS_GROUPOPTIMIZED,");
        if (VAR_101 & VAR_8)
            FUNC_1(VAR_103, "DPCAPS_KEEPALIVEOPTIMIZED,");
        if (VAR_101 & VAR_5)
            FUNC_1(VAR_103, "DPCAPS_GUARANTEEDOPTIMIZED,");
        if (VAR_101 & VAR_6)
            FUNC_1(VAR_103, "DPCAPS_GUARANTEEDSUPPORTED,");
        if (VAR_101 & VAR_11)
            FUNC_1(VAR_103, "DPCAPS_SIGNINGSUPPORTED,");
        if (VAR_101 & VAR_3)
            FUNC_1(VAR_103, "DPCAPS_ENCRYPTIONSUPPORTED,");
        if (VAR_101 & VAR_1)
            FUNC_1(VAR_103, "DPCAPS_ASYNCCANCELSUPPORTED,");
        if (VAR_101 & VAR_0)
            FUNC_1(VAR_103, "DPCAPS_ASYNCCANCELALLSUPPORTED,");
        if (VAR_101 & VAR_10)
            FUNC_1(VAR_103, "DPCAPS_SENDTIMEOUTSUPPORTED,");
        if (VAR_101 & VAR_9)
            FUNC_1(VAR_103, "DPCAPS_SENDPRIORITYSUPPORTED,");
        if (VAR_101 & VAR_2)
            FUNC_1(VAR_103, "DPCAPS_ASYNCSUPPORTED,");

        if (VAR_101 & VAR_47)
            FUNC_1(VAR_103, "DPPLAYERCAPS_LOCAL,");
    }

    if ((FUNC_3(VAR_103) == 0) && (VAR_101 != 0))
        FUNC_2(VAR_103, "UNKNOWN");
    else
        VAR_103[FUNC_3(VAR_103)-1] = '\0';

    return VAR_103;
}

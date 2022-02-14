
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int mixerlineA ;
typedef int controls ;
typedef int capsA2 ;
typedef int capsA ;
typedef scalar_t__ ULONG_PTR ;
typedef int UINT_PTR ;
struct TYPE_17__ {int cSteps; } ;
struct TYPE_21__ {size_t szName; int dwControlID; size_t cMultipleItems; TYPE_2__ Metrics; int Bounds; int fdwControl; int dwControlType; int szShortName; } ;
struct TYPE_20__ {int vDriverVersion; size_t cDestinations; int szPname; int wPid; int wMid; } ;
struct TYPE_16__ {int vDriverVersion; int wPid; int wMid; int szPname; int dwDeviceID; int dwType; } ;
struct TYPE_19__ {int cbStruct; size_t dwDestination; scalar_t__ dwUser; size_t dwSource; size_t dwLineID; size_t cConnections; int cControls; TYPE_1__ Target; int dwComponentType; int fdwLine; int cChannels; int szName; int szShortName; } ;
struct TYPE_18__ {int cbStruct; int cControls; size_t dwLineID; int cbmxctrl; TYPE_6__* pamxctrl; } ;
struct TYPE_15__ {size_t dwMaximum; int dwMinimum; } ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_3__ MIXERLINECONTROLSA ;
typedef TYPE_4__ MIXERLINEA ;
typedef int MIXERCONTROLA ;
typedef TYPE_5__ MIXERCAPSA ;
typedef TYPE_6__* LPMIXERCONTROLA ;
typedef scalar_t__ HMIXEROBJ ;
typedef int HMIXER ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_12__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_9 (int,TYPE_5__*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (scalar_t__,TYPE_4__*,int) ;
 scalar_t__ FUNC_12 (int *,int,int ,int ,int ) ;
 int FUNC_13 (scalar_t__,TYPE_6__*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int,char*,...) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_20(int VAR_10)
{
    MIXERCAPSA VAR_11;
    HMIXEROBJ VAR_12;
    MMRESULT VAR_13;
    DWORD VAR_14,VAR_15,VAR_16,VAR_17;

    VAR_13=FUNC_9(VAR_10,0,sizeof(VAR_11));
    FUNC_15(VAR_13==VAR_6,
       "mixerGetDevCapsA: MMSYSERR_INVALPARAM expected, got %s\n",
       FUNC_14(VAR_13));

    VAR_13=FUNC_9(VAR_10,&VAR_11,4);
    FUNC_15(VAR_13==VAR_8,
       "mixerGetDevCapsA: MMSYSERR_NOERROR expected, got %s\n",
       FUNC_14(VAR_13));

    VAR_13=FUNC_9(VAR_10,&VAR_11,sizeof(VAR_11));
    FUNC_15(VAR_13==VAR_8,
       "mixerGetDevCapsA: MMSYSERR_NOERROR expected, got %s\n",
       FUNC_14(VAR_13));

    if (VAR_9) {
        FUNC_19("  %d: \"%s\" %d.%d (%d:%d) destinations=%d\n", VAR_10,
              VAR_11.szPname, VAR_11.vDriverVersion >> 8,
              VAR_11.vDriverVersion & 0xff,VAR_11.wMid,VAR_11.wPid,
              VAR_11.cDestinations);
    } else {
        FUNC_19("  %d: \"%s\" %d.%d (%d:%d)\n", VAR_10,
              VAR_11.szPname, VAR_11.vDriverVersion >> 8,
              VAR_11.vDriverVersion & 0xff,VAR_11.wMid,VAR_11.wPid);
    }

    VAR_13 = FUNC_12((HMIXER*)&VAR_12, VAR_10, 0, 0, 0);
    FUNC_15(VAR_13==VAR_8,
       "mixerOpen: MMSYSERR_NOERROR expected, got %s\n",FUNC_14(VAR_13));
    if (VAR_13==VAR_8) {
        MIXERCAPSA VAR_18;

        VAR_13=FUNC_9((UINT_PTR)VAR_12,&VAR_18,sizeof(VAR_18));
        FUNC_15(VAR_13==VAR_8,
           "mixerGetDevCapsA: MMSYSERR_NOERROR expected, got %s\n",
           FUNC_14(VAR_13));
        FUNC_15(!FUNC_16(VAR_18, VAR_11.szPname), "Got wrong device caps\n");

        for (VAR_14=0;VAR_14<VAR_11.cDestinations;VAR_14++) {
            MIXERLINEA VAR_19;
            VAR_19.cbStruct = 0;
            VAR_19.dwDestination=VAR_14;
            VAR_13 = FUNC_11(VAR_12, &VAR_19, VAR_3);
            FUNC_15(VAR_13==VAR_6,
               "mixerGetLineInfoA(MIXER_GETLINEINFOF_DESTINATION): "
               "MMSYSERR_INVALPARAM expected, got %s\n",
               FUNC_14(VAR_13));

            VAR_19.cbStruct = sizeof(VAR_19);
            VAR_19.dwDestination=VAR_11.cDestinations;
            VAR_13 = FUNC_11(VAR_12, &VAR_19, VAR_3);
            FUNC_15(VAR_13==VAR_6||VAR_13==VAR_1,
               "mixerGetLineInfoA(MIXER_GETLINEINFOF_DESTINATION): "
               "MMSYSERR_INVALPARAM or MIXERR_INVALLINE expected, got %s\n",
               FUNC_14(VAR_13));

            VAR_19.cbStruct = sizeof(VAR_19);
            VAR_19.dwDestination=VAR_14;
            VAR_13 = FUNC_11(VAR_12, 0, VAR_3);
            FUNC_15(VAR_13==VAR_6,
               "mixerGetLineInfoA(MIXER_GETLINEINFOF_DESTINATION): "
               "MMSYSERR_INVALPARAM expected, got %s\n",
               FUNC_14(VAR_13));

            VAR_19.cbStruct = sizeof(VAR_19);
            VAR_19.dwDestination=VAR_14;
            VAR_13 = FUNC_11(VAR_12, &VAR_19, -1);
            FUNC_15(VAR_13==VAR_5,
               "mixerGetLineInfoA(-1): MMSYSERR_INVALFLAG expected, got %s\n",
               FUNC_14(VAR_13));

            VAR_19.cbStruct = sizeof(VAR_19);
            VAR_19.dwDestination=VAR_14;
            VAR_19.dwUser = (ULONG_PTR)0xdeadbeef;
            VAR_13 = FUNC_11(VAR_12, &VAR_19, VAR_3);
            FUNC_15(VAR_13==VAR_8||VAR_13==VAR_7,
               "mixerGetLineInfoA(MIXER_GETLINEINFOF_DESTINATION): "
               "MMSYSERR_NOERROR expected, got %s\n",
               FUNC_14(VAR_13));
            FUNC_15(VAR_19.dwUser == 0, "dwUser was not reset\n");
            if (VAR_13==VAR_7)
                FUNC_19("  No Driver\n");
            else if (VAR_13==VAR_8) {
       if (VAR_9) {
                FUNC_19("    %d: \"%s\" (%s) Destination=%d Source=%d\n",
                      VAR_14,VAR_19.szShortName, VAR_19.szName,
                      VAR_19.dwDestination,VAR_19.dwSource);
                FUNC_19("        LineID=%08x Channels=%d "
                      "Connections=%d Controls=%d\n",
                      VAR_19.dwLineID,VAR_19.cChannels,
                      VAR_19.cConnections,VAR_19.cControls);
                FUNC_19("        State=0x%08x(%s)\n",
                      VAR_19.fdwLine,FUNC_7(VAR_19.fdwLine));
                FUNC_19("        ComponentType=%s\n",
                      FUNC_4(VAR_19.dwComponentType));
                FUNC_19("        Type=%s\n",
                      FUNC_17(VAR_19.Target.dwType));
                FUNC_19("        Device=%d (%s) %d.%d (%d:%d)\n",
                      VAR_19.Target.dwDeviceID,
                      VAR_19.Target.szPname,
                      VAR_19.Target.vDriverVersion >> 8,
                      VAR_19.Target.vDriverVersion & 0xff,
                      VAR_19.Target.wMid, VAR_19.Target.wPid);
       }
              VAR_16=VAR_19.cConnections;
              for(VAR_15=0;VAR_15<VAR_16;VAR_15++) {
                VAR_19.cbStruct = sizeof(VAR_19);
                VAR_19.dwDestination=VAR_14;
                VAR_19.dwSource=VAR_15;
                VAR_13 = FUNC_11(VAR_12, &VAR_19, VAR_4);
                FUNC_15(VAR_13==VAR_8||VAR_13==VAR_7,
                   "mixerGetLineInfoA(MIXER_GETLINEINFOF_SOURCE): "
                   "MMSYSERR_NOERROR expected, got %s\n",
                   FUNC_14(VAR_13));
                if (VAR_13==VAR_7)
                    FUNC_19("  No Driver\n");
                else if (VAR_13==VAR_8) {
                    LPMIXERCONTROLA VAR_20;
                    MIXERLINECONTROLSA VAR_21;
                    if (VAR_9) {
                        FUNC_19("      %d: \"%s\" (%s) Destination=%d Source=%d\n",
                              VAR_15,VAR_19.szShortName, VAR_19.szName,
                              VAR_19.dwDestination,VAR_19.dwSource);
                        FUNC_19("          LineID=%08x Channels=%d "
                              "Connections=%d Controls=%d\n",
                              VAR_19.dwLineID,VAR_19.cChannels,
                              VAR_19.cConnections,VAR_19.cControls);
                        FUNC_19("          State=0x%08x(%s)\n",
                              VAR_19.fdwLine,FUNC_7(VAR_19.fdwLine));
                        FUNC_19("          ComponentType=%s\n",
                              FUNC_4(VAR_19.dwComponentType));
                        FUNC_19("          Type=%s\n",
                              FUNC_17(VAR_19.Target.dwType));
                        FUNC_19("          Device=%d (%s) %d.%d (%d:%d)\n",
                              VAR_19.Target.dwDeviceID,
                              VAR_19.Target.szPname,
                              VAR_19.Target.vDriverVersion >> 8,
                              VAR_19.Target.vDriverVersion & 0xff,
                              VAR_19.Target.wMid, VAR_19.Target.wPid);
                    }
                    if (VAR_19.cControls) {
                        VAR_20=FUNC_1(FUNC_0(),VAR_0,
                            VAR_19.cControls*sizeof(MIXERCONTROLA));
                        if (VAR_20) {
                            FUNC_8(&VAR_21, 0, sizeof(VAR_21));

                            VAR_13 = FUNC_10(VAR_12, 0, VAR_2);
                            FUNC_15(VAR_13==VAR_6,
                               "mixerGetLineControlsA(MIXER_GETLINECONTROLSF_ALL): "
                               "MMSYSERR_INVALPARAM expected, got %s\n",
                               FUNC_14(VAR_13));

                            VAR_13 = FUNC_10(VAR_12, &VAR_21, -1);
                            FUNC_15(VAR_13==VAR_5||VAR_13==VAR_6,
                               "mixerGetLineControlsA(-1): "
                               "MMSYSERR_INVALFLAG or MMSYSERR_INVALPARAM expected, got %s\n",
                               FUNC_14(VAR_13));

                            VAR_21.cbStruct = sizeof(MIXERLINECONTROLSA);
                            VAR_21.cControls = VAR_19.cControls;
                            VAR_21.dwLineID = VAR_19.dwLineID;
                            VAR_21.pamxctrl = VAR_20;
                            VAR_21.cbmxctrl = sizeof(MIXERCONTROLA);




                            VAR_13 = FUNC_10(VAR_12, &VAR_21, VAR_2);
                            FUNC_15(VAR_13==VAR_8,
                               "mixerGetLineControlsA(MIXER_GETLINECONTROLSF_ALL): "
                               "MMSYSERR_NOERROR expected, got %s\n",
                               FUNC_14(VAR_13));
                            if (VAR_13==VAR_8) {
                                for(VAR_17=0;VAR_17<VAR_19.cControls;VAR_17++) {
                                    if (VAR_9) {
                                        FUNC_19("        %d: \"%s\" (%s) ControlID=%d\n", VAR_17,
                                              VAR_20[VAR_17].szShortName,
                                              VAR_20[VAR_17].szName, VAR_20[VAR_17].dwControlID);
                                        FUNC_19("            ControlType=%s\n",
                                               FUNC_6(VAR_20[VAR_17].dwControlType));
                                        FUNC_19("            Control=0x%08x(%s)\n",
                                              VAR_20[VAR_17].fdwControl,
                                              FUNC_5(VAR_20[VAR_17].fdwControl));
                                        FUNC_19("            Items=%d Min=%d Max=%d Step=%d\n",
                                              VAR_20[VAR_17].cMultipleItems,
                                              FUNC_3(VAR_20[VAR_17].Bounds).dwMinimum,
                                              FUNC_3(VAR_20[VAR_17].Bounds).dwMaximum,
                                              VAR_20[VAR_17].Metrics.cSteps);
                                    }

                                    FUNC_13(VAR_12, &VAR_20[VAR_17]);
                                }
                            }

                            FUNC_2(FUNC_0(),0,VAR_20);
                        }
                    }
                }
              }
            }
        }
        FUNC_18((HMIXER)VAR_12);
    }
}

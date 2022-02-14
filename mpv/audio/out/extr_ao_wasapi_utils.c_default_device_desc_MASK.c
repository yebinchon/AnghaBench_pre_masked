
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enumerator {int log; int pEnumerator; } ;
struct device_desc {int dummy; } ;
typedef int IMMDevice ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (struct enumerator*,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct device_desc* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct device_desc *FUNC_6(struct enumerator *VAR_2)
{
    IMMDevice *VAR_3 = ((void*)0);
    HRESULT VAR_4 = FUNC_1(
        VAR_2->pEnumerator, VAR_1, VAR_0, &VAR_3);
    if (FUNC_0(VAR_4)) {
        FUNC_2(VAR_2, "Error from GetDefaultAudioEndpoint: %s\n",
               FUNC_5(VAR_4));
        return ((void*)0);
    }
    struct device_desc *VAR_5 = FUNC_4(VAR_2->log, VAR_3);
    FUNC_3(VAR_3);
    return VAR_5;
}
